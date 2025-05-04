@interface AWEGeneralPopupPresenter : NSObject
- (BOOL)canShowPopupWithModel:record:;
- (void)performActionAtIndex:withType:target:;
- (void)popupWillShowWithModel:;
- (void)showPopupWithModel:onClose:;
- (void)updateDescripterWith:record:;
- (void)showPopupWithModel:withAlertView:onClose:;
- (void)popupDidDismissWithModel:withSelectionIndex:onClose:;
@end

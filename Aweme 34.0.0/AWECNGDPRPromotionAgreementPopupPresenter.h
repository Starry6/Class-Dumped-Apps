@interface AWECNGDPRPromotionAgreementPopupPresenter : AWEGeneralPopupPresenter
- (BOOL)canShowPopupWithModel:record:;
- (void)popupDidDismissWithModel:withSelectionIndex:;
- (void)performActionAtIndex:withType:target:;
- (void)popupWillShowWithModel:;
- (void)requestForAgreement;
- (void)showPopupWithModel:onClose:;
+ (id)popupID;
@end

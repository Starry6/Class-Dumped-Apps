@interface AWEIMMessageShareButton : AWEButton
- (void)showSharePanelWithMessage:;
- (void)updateShareButtonFrame:sendFromMe:;
- (BOOL)gestureRecognizerShouldBegin:;
+ (BOOL)isShareButtonCanShow;
+ (id)button;
@end

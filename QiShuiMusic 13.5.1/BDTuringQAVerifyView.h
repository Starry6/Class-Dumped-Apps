@interface BDTuringQAVerifyView : BDTuringVerifyView
@property (nonatomic) BDTuringImageTipView tipView;
@property (nonatomic) BOOL pop;
- (void)setPop:;
- (void)addTipView;
- (void)adjustWebViewPosition;
- (id)customTheme;
- (void)onKeyboardWillHide:;
- (void)onKeyboardWillShow:;
- (BOOL)pop;
- (void)setFrame:;
- (void)webView:didFailProvisionalNavigation:withError:;
- (void).cxx_destruct;
- (void)webView:didFailNavigation:withError:;
- (id)customText;
- (id)tipView;
- (void)setTipView:;
@end

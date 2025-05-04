@interface AWEIMUIButtonPresenter : AWEIMUIViewPresenter
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (BOOL)isMeasurementRequired;
- (id)sizeThatFit:;
- (BOOL)isTextNode;
- (void)p_tapAction:;
@end

@interface AWEIMUILabelPresenter : AWEIMUIViewPresenter
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (BOOL)isMeasurementRequired;
- (id)sizeThatFit:;
- (BOOL)isTextNode;
@end

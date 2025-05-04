@interface AWEIMMessageBottomQuickReplyPresenter : AWEIMUIViewPresenter
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (BOOL)isMeasurementRequired;
- (id)sizeThatFit:;
- (double)getRecommendListWidth;
- (BOOL)isTextNode;
- (id)initWithContext:;
@end

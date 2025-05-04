@interface AWEIMSilverWingRecommendListPresenter : AWEIMUIViewPresenter
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (BOOL)isMeasurementRequired;
- (id)sizeThatFit:;
- (double)getRecommendListWidth;
- (BOOL)isTextNode;
- (long long)hitWhichListViewWithGesture:;
- (id)initWithContext:;
@end

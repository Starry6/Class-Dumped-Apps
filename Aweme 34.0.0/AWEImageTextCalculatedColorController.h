@interface AWEImageTextCalculatedColorController : BDMultiContentContainer.BaseContentListController
- (void)onScrollViewDidScroll:;
- (void)onListDidReset;
- (void)onModelDidUpdateWithModel:;
- (void)onImageCellDidEndLoadImage:image:url:error:;
- (void)calculateColorWithImage:imageModel:completion:;
- (id)getColorArrayAtIndex:;
- (BOOL)judgeEnable;
- (id)getGradientColors;
- (id)getGradientLocations;
- (id)getGradientView;
- (void)onShrinkStateDidUpdate:insets:animated:;
- (void)onImageContentInsetsDidUpdate:animated:duration:;
- (void)onImageTextSectionDidEndPreloadWithCurrentIndex:image:url:error:;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end

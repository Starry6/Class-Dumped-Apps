@interface AWEUnanimatedPendantView : AWEPendantView
@property (nonatomic) UIImageView foldedImageView;
@property (nonatomic) UIImageView expandedImageView;
- (void)performUpdateFromState:toState:animated:;
- (id)expandedImageView;
- (id)initWithFrame:foldedImage:expandedImage:;
- (id)initWithFrame:foldedImageURL:expandedImageURL:;
- (void)performFoldingAnimation;
- (void)performExpandingAnimation;
- (void)animateWithDuration:timingFunction:animations:completion:;
- (id)addImageViewWithImage:expanded:;
- (id)addImageWithURL:expanded:;
- (void)switchImageViewWithFolded:;
- (id)foldedImageView;
- (void).cxx_destruct;
@end

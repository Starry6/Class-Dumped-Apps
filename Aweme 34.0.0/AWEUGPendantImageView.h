@interface AWEUGPendantImageView : AWEUGPendantContentBaseView
@property (nonatomic) UIImageView foldedImageView;
@property (nonatomic) UIImageView expandedImageView;
- (id)expandView;
- (void)performUpdateFromState:toState:animated:animationStart:animationEnd:;
- (id)expandedImageView;
- (id)foldView;
- (void)animateWithDuration:timingFunction:animations:completion:;
- (void)switchImageViewWithFolded:;
- (id)foldedImageView;
- (void)performFoldingAnimationWithAnimationStart:animationEnd:;
- (void)performExpandingAnimationWithAnimationStart:animationEnd:;
- (id)initWithFrame:expandFrame:foldFrame:foldedImageURL:expandedImageURL:;
- (id)initWithFrame:expandFrame:foldFrame:foldedImage:expandedImage:;
- (void)updateWithFrame:expandFrame:foldFrame:foldedImageURL:expandedImageURL:;
- (void)updateWithFrame:expandFrame:foldFrame:foldedImage:expandedImage:;
- (id)addImageViewWithImage:frame:;
- (id)addImageWithURL:frame:;
- (void).cxx_destruct;
@end

@interface IESLiveVSPauseTriangle : UIView
@property (nonatomic) UIImageView image;
@property (nonatomic) UIImage skinImage;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) @? triangleAnimationCompletionBlock;
- (void)applyAccessibility;
- (void)hideWith:time:;
- (void)setSkinImage:;
- (void)setTriangleAnimationCompletionBlock:;
- (void)setTriangleImage:;
- (void)setupImageWithFrame:;
- (void)showWith:time:;
- (id)skinImage;
- (id)triangleAnimationCompletionBlock;
- (void)updateIsLandscape:;
- (BOOL)isLandscape;
- (void)setImage:;
- (void)setIsLandscape:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)image;
@end

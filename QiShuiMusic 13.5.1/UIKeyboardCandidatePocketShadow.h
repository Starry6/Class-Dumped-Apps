@interface UIKeyboardCandidatePocketShadow : UICollectionReusableView
@property (nonatomic) BOOL shadowFadesToBottom;
@property (nonatomic) BOOL drawsShadow;
@property (nonatomic) BOOL showsInDarkBackground;
- (void)drawRect:;
- (void)setDrawsShadow:;
- (id)initWithFrame:;
- (void)applyLayoutAttributes:;
- (BOOL)drawsShadow;
- (BOOL)shadowFadesToBottom;
- (void)setShadowFadesToBottom:;
- (BOOL)showsInDarkBackground;
- (void)setShowsInDarkBackground:;
+ (double)widthWithShadow:;
+ (id)leftShadowImage;
@end

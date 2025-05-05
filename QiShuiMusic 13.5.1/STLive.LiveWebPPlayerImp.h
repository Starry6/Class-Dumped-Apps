@interface STLive.LiveWebPPlayerImp : BDImageView
@property (nonatomic) BOOL optimizeAnimationLeak;
- (BOOL)optimizeAnimationLeak;
- (void)setOptimizeAnimationLeak:;
- (void)startWebPAnimating;
- (void)stopWebPAnimating;
- (void)stopWebPAnimation;
- (id)initWithImage:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (id)initWithImage:highlightedImage:;
@end

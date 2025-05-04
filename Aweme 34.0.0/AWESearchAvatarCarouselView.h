@interface AWESearchAvatarCarouselView : UIView
@property (nonatomic) AWESearchAvatarCarouselViewConfig config;
@property (nonatomic) NSMutableArray imageViewList;
@property (nonatomic) NSTimer timer;
@property (nonatomic) BOOL isAnimating;
- (void)configUI;
- (void)setImageViewList:;
- (id)imageViewList;
- (void)updateAvatarFrame;
- (void)setConfig:;
- (void)setTimer:;
- (id)timer;
- (id)initWithConfig:;
- (id)config;
- (void)startAnimation;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (void)updateWithData:;
- (void)stopAnimation;
@end

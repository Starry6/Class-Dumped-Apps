@interface AWEMusicStreamingImpl.PlayCollectButton : UIView
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL collected;
@property (nonatomic) _TtC21AWEMusicStreamingImpl12BNPlayButton collectButton;
- (BOOL)collected;
- (void)setCollected:;
- (id)collectButton;
- (void)setCollectButton:;
- (void)removeCollectAnimations;
- (void)setCollected:animated:;
- (void)startCollectGuideAnimaFromAction:;
- (void)removeCollectGuideAnima;
- (id)initWithFrame:;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (id)initWithCoder:;
@end

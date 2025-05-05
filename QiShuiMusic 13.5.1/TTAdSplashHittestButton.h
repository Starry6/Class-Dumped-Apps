@interface TTAdSplashHittestButton : UIButton
@property (nonatomic) NSArray hotspots;
- (id)hotspots;
- (void)refreshHotspotWith:;
- (void)setHotspots:;
- (void)drawRect:;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
@end

@interface VEAnimatedImageInfo : NSObject
@property (nonatomic) NSInteger fps;
@property (nonatomic) NSInteger loopCount;
- (int)fps;
- (id)copyWithZone:;
- (int)loopCount;
- (void)setFps:;
- (void)setLoopCount:;
@end

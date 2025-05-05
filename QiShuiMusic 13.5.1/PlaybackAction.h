@interface PlaybackAction : NSObject
@property (nonatomic) q action;
@property (nonatomic) float time;
- (void)setTime:;
- (float)time;
- (long long)action;
- (void)setAction:;
@end

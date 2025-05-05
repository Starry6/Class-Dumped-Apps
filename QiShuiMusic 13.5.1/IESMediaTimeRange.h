@interface IESMediaTimeRange : NSObject
@property (nonatomic) double start;
@property (nonatomic) double duration;
- (void)setStart:;
- (double)start;
- (void)setDuration:;
- (double)duration;
@end

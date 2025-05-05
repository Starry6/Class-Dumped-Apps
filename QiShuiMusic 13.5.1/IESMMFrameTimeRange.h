@interface IESMMFrameTimeRange : NSObject
@property (nonatomic) double minFrameRate;
@property (nonatomic) double maxFrameRate;
- (void)setMaxFrameRate:;
- (id)initWithMinFrameRate:maxFrameRate:;
- (double)minFrameRate;
- (void)setMinFrameRate:;
- (double)maxFrameRate;
@end

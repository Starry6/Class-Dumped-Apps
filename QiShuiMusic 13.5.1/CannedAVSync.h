@interface CannedAVSync : NSObject
@property (nonatomic) double base;
@property (nonatomic) double modulo;
- (id)init;
- (void)setBase:;
- (double)base;
- (void)clear;
- (void)addStreamWithCount:rate:;
- (void)addDrift:;
- (double)clampForTime:;
- (double)modulo;
- (void)setModulo:;
+ (id)sharedCannedAVSync;
@end

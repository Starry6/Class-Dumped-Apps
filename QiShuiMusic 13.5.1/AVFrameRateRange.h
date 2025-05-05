@interface AVFrameRateRange : NSObject
@property (nonatomic) double minFrameRate;
@property (nonatomic) double maxFrameRate;
@property (nonatomic) {?=qiIq} maxFrameDuration;
@property (nonatomic) {?=qiIq} minFrameDuration;
- (BOOL)includesFrameRate:;
- (void)dealloc;
- (BOOL)includesFrameDuration:;
- (id)initWithMinFrameRate:maxFrameRate:;
- (double)minFrameRate;
- (id)description;
- (id)maxFrameDuration;
- (double)maxFrameRate;
- (id)minFrameDuration;
- (BOOL)isEqual:;
+ (id)frameRateRangeWithMinRate:maxFrameRate:;
@end

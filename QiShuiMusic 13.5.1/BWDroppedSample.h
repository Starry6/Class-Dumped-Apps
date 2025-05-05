@interface BWDroppedSample : NSObject
@property (nonatomic) NSString reason;
@property (nonatomic) {?=qiIq} pts;
@property (nonatomic) NSArray backPressureSemaphoresToIgnore;
- (void)dealloc;
- (id)reason;
- (id)pts;
- (id)backPressureSemaphoresToIgnore;
+ (id)newDroppedSampleWithReason:pts:;
+ (id)newDroppedSampleFromDroppedSample:backPressureSemaphoresToIgnore:;
@end

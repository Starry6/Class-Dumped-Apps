@interface BitrateLimits : NSObject
@property (nonatomic) NSArray limits;
- (id)limits;
- (void)dealloc;
- (id)initWithOperatingMode:withBitrateCap:useCaseWatchContinuity:;
- (void)capDefaultValues:;
- (unsigned long long)defaultValueForNetwork:;
+ (unsigned long long)insertionIndex:forValue:;
@end

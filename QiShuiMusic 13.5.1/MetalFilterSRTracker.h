@interface MetalFilterSRTracker : NSObject
@property (nonatomic) double averageCostTime;
@property (nonatomic) double srSuccessRate;
@property (nonatomic) NSInteger mSrSharpLevel;
- (double)averageCostTime;
- (double)getFloatForKey:;
- (int)getIntForKey:;
- (int)mSrSharpLevel;
- (void)setAverageCostTime:;
- (void)setFloatForKey:key:;
- (void)setIntForKey:key:;
- (void)setMSrSharpLevel:;
- (void)setSrSuccessRate:;
- (double)srSuccessRate;
- (id)init;
- (void)reset;
+ (id)sharedInstance;
@end

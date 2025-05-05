@interface MOVStreamOptions : NSObject
@property (nonatomic) BOOL disableFrameReordering;
@property (nonatomic) double bitrateMultiplier;
@property (nonatomic) Q bitrateOverride;
@property (nonatomic) BOOL forceColorLossless;
@property (nonatomic) BOOL force10bitMonoByVT;
@property (nonatomic) BOOL forceLossless8bitMonoByVT;
@property (nonatomic) BOOL skipSourceHint;
- (id)init;
- (id)localDefaults;
- (void)checkBossMode;
- (id)currentOptions;
- (BOOL)disableFrameReordering;
- (double)bitrateMultiplier;
- (unsigned long long)bitrateOverride;
- (BOOL)forceColorLossless;
- (BOOL)force10bitMonoByVT;
- (BOOL)forceLossless8bitMonoByVT;
- (BOOL)skipSourceHint;
- (id)standardDefaultValues;
- (void)checkHasValue:changedForKey:;
- (void)registerStandardDefaults;
+ (id)sharedOptions;
@end

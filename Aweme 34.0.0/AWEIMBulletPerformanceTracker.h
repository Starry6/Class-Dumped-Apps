@interface AWEIMBulletPerformanceTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackSourceWithFPSEvent:iesCon:;
- (id)extraInfoForFPSEvent:iesCon:;
- (id)trackSourceWithEvent:message:;
- (id)trackSourceWithEvent:effectCardKeys:;
- (void)trackPreloadInfoWithBulletScene:preloadScene:preloadCount:extraInfo:;
- (BOOL)shouldTrackEvent:withKey:params:;
- (BOOL)shouldTrackEvent:withKey:defaultKey:params:;
- (BOOL)shouldTrackEvent:withSamplingRate:;
- (id)trackSampleRateForEvent:withKey:;
- (id)trackSampleRateForEvent:withKey:defaultKey:;
- (long long)trackStringMerge:toString:needHeadSplitSymbol:needTailSplitSymbol:;
- (double)p_randFrom0To1;
- (id)p_msgTrackSampleRateConfigDict;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end

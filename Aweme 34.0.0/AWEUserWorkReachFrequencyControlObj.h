@interface AWEUserWorkReachFrequencyControlObj : NSObject
@property (nonatomic) q effectiveTime;
@property (nonatomic) NSString cacheKey;
@property (nonatomic) NSMutableDictionary showCountInfoDict;
@property (nonatomic) NSMutableDictionary hiddenBlockDict;
@property (nonatomic) q maxCount;
- (long long)effectiveTime;
- (void)setEffectiveTime:;
- (id)showCountInfoDict;
- (id)hiddenBlockDict;
- (BOOL)displayReachWithKey:showNumThreshold:;
- (void)consumeReachFrequencyWithKey:;
- (void)clearReachFrequencyWithKey:;
- (void)objectSetIgnoreWithKey:;
- (BOOL)selectedReachWithKey:selectedNumThreshold:;
- (id)initWithFrequencyCacheKey:effectiveTime:defaultValue:;
- (void)setShowCountInfoDict:;
- (void)setHiddenBlockDict:;
- (void)profileStorageCountInfo;
- (id)cacheKey;
- (void)setMaxCount:;
- (long long)maxCount;
- (void).cxx_destruct;
- (void)setCacheKey:;
- (id)objectWithKey:;
@end

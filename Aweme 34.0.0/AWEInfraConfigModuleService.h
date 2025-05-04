@interface AWEInfraConfigModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startTrackerService;
- (BOOL)isTrackerConfigured;
- (BOOL)enablePitaya;
- (void)startPitaya;
- (id)getAppleStoreChannelID;
- (long long)getUniversalCleanTypeWithExposure:;
- (id)getUniversalCleanTitle;
- (BOOL)isUniversalCleanNewIcon;
- (id)getExtremelyViewModelForExternalCacheCleanWithIgnoreALog:diskOverallCalculateProgress:overallCalculateCompletion:businessCalculateCompletion:;
- (id)aAWEInfraConfigModuleServiceCommonAdapter;
+ (Class)aAWEInfraConfigModuleServiceCommonAdapterClass;
@end

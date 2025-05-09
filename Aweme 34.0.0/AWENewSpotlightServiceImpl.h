@interface AWENewSpotlightServiceImpl : HTSService
@property (nonatomic) NSArray fixedQuerys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (id)lastRecordTime;
- (void)donateSearchAppQueryWithCompletion:;
- (void)updateDailyTopQueryData:;
- (void)donateUserQueryWithAwemeList:query:completion:;
- (BOOL)enableSiriSuggestWithTargetScheme:;
- (BOOL)enableSearchQueryDonate;
- (id)aAWEUGKitModuleDOUYINAdapter;
- (id)aNSObject;
- (id)aAWEUGKitModuleCommonAdapter;
- (id)fixedQuerys;
- (void)setFixedQuerys:;
- (BOOL)disableCleanWhenFeatureClose;
- (void)clearCoreSpotlightItemsWithIdentifiers:completion:;
- (BOOL)enableNewSpotlightDonate;
- (void)cleanHistoryDonate;
- (BOOL)shouldDonateSearchTopQuery;
- (id)parseJSONDataToTopQueryVideoInfoList;
- (id)generateSearchableItemToSearchResultWithModel:enterFrom:enterMethod:;
- (BOOL)shouldClearDonatedData;
- (void)donateSearchableItems:scene:;
- (void)recordCurrentTimeIfNeeded;
- (BOOL)currentVersionLowerThanSetting;
- (void)clearAppQuery:;
- (void)clearDailyTopQuery:;
- (BOOL)shouldDonateDailyTopQuery;
- (id)generateSearchableItemToSearchResultWithModel:enterFrom:enterMethod:domainIdentifier:expireTime:;
- (BOOL)enableSpotlightUserDonate;
- (id)generateSearchableItemToSearchResultWithAweme:query:enterFrom:enterMethod:;
- (double)cleanDonateIntervalSeconds;
- (id)coreSpotlightConfig;
- (double)appDonateExpireTime;
- (BOOL)enableDeleteTag;
- (id)stringWithoutAllTags:;
- (double)userDonateExpireTime;
- (void)clearUserSearchQuery:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)transferType;
+ (Class)aAWEUGKitModuleDOUYINAdapterClass;
+ (Class)aNSObjectClass;
+ (Class)aAWEUGKitModuleCommonAdapterClass;
+ (void)resetLastRecordTime;
@end

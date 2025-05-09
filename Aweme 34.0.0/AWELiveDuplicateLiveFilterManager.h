@interface AWELiveDuplicateLiveFilterManager : NSObject
@property (nonatomic) NSMutableDictionary liveDuplicateInfos;
@property (nonatomic) NSArray enterAllowList;
@property (nonatomic) NSDictionary timeSpaceConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldFilterDuplicateItemWithExistItemModel:index:enterFrom:;
- (void)addAweme:index:enterFrom:;
- (void)containerDeleteAwemesWithLiveFilter:enterFrom:;
- (void)setLiveDuplicateInfos:;
- (id)enterAllowList;
- (long long)timeSpaceForEnterFrom:;
- (id)liveDuplicateInfos;
- (void)trackFilterItemWithEvent:awemeModel:enterFrom:extraParams:;
- (id)timeSpaceConfig;
- (void)setEnterAllowList:;
- (long long)homepageHotTimeSpace;
- (long long)homepageFollowTimeSpace;
- (long long)homepageFamiliarTimeSpace;
- (void)setTimeSpaceConfig:;
- (void)clearDuplicateItemsWithEnterFrom:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end

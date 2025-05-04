@interface AWESearchPerfPitayaFeatureStorageManager : NSObject
@property (nonatomic) NSMutableDictionary storage;
- (void)p_addLag:forSearchId:;
- (void)p_addSlide:forSearchId:;
- (id)p_fetchLatestSlideForSearchId:;
- (id)p_fetchLatestLagWithCountLimit:forSearchId:;
- (BOOL)canAddInfo;
- (void)p_addInfo:forStorageKey:andUniqueId:sortComparator:;
- (long long)p_countLimitForKey:;
- (id)p_identifierForName:andUniqueId:;
- (id)p_relationBetweenCountLimitAndStorageKey;
- (id)p_fetchInfoWithCountLimit:forStorageKey:andUniqueId:;
- (void)setStorage:;
- (id)init;
- (id)storage;
- (void).cxx_destruct;
+ (void)addLag:forSearchId:;
+ (void)addSlide:forSearchId:;
+ (id)fetchLatestLagWithCountLimit:forSearchId:;
+ (id)fetchLatestSlideForSearchId:;
+ (id)manager;
@end

@interface AWEFamiliarFeedDeduplicateManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> writeDiskQueue;
@property (nonatomic) WCTDatabase database;
@property (nonatomic) NSMutableDictionary playRecordsMap;
@property (nonatomic) q maxCacheSize;
@property (nonatomic) NSDictionary uniqueTypeMaxUploadSize;
@property (nonatomic) BOOL enableDeduplicate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (id)recentGidListParam;
- (id)recentCloseFriendsParam;
- (void)recordPlayWithItem:enterFrom:;
- (BOOL)hasPlayedItemInFriendsTab:;
- (void)trackDeduplicateInClientWithEnterFrom:duplicateID:awemeType:;
- (BOOL)hasPlayedItem:;
- (BOOL)hasPlayedItemInFollowTab:;
- (void)recordPlayWithItemID:awemeType:enterFrom:;
- (id)addRecentDeduplicateParams;
- (void)prepareDatabase;
- (id)wcdbFilePath;
- (BOOL)createTableWithError:;
- (id)recentGidList;
- (id)recentStoriesParam;
- (void)trackFriendsTabRecentGidsInfo;
- (id)unreadGidsParamWithAwemeList:dataSourceDuplicateAwemeIDs:;
- (id)playedModelWithItemId:;
- (void)updateConfigFromCloud;
- (void)loadValidRecordsFromDB;
- (BOOL)enableDeduplicate;
- (id)playRecordsMap;
- (BOOL)isDatabaseCorrupted:;
- (id)writeDiskQueue;
- (void)setPlayRecordsMap:;
- (id)deduplicateTypeForAwemeModel:;
- (id)uniqueTypeMaxUploadSize;
- (id)recentPlayItemList;
- (id)uniqueTypeRecordsListStr:;
- (void)setUniqueTypeMaxUploadSize:;
- (void)setEnableDeduplicate:;
- (void)trackForFriendDuplicateInFeedWithPage:itemID:;
- (void)setWriteDiskQueue:;
- (void)setDatabase:;
- (id)tableName;
- (id)database;
- (id)init;
- (void)dealloc;
- (void)resetData;
- (void).cxx_destruct;
- (void)removeAllRecords;
- (long long)maxCacheSize;
- (void)setMaxCacheSize:;
+ (BOOL)enableRefactorFamiliarDeduplicate;
+ (id)sharedInstance;
@end

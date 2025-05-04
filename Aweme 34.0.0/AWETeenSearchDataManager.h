@interface AWETeenSearchDataManager : NSObject
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString suggestLogId;
@property (nonatomic) NSString searchId;
@property (nonatomic) NSMutableArray wordIDList;
@property (nonatomic) NSString lastWatchVideoID;
- (id)searchId;
- (void)setSearchId:;
- (void)setLastWatchVideoID:;
- (id)wordIDList;
- (void)setWordIDList:;
- (id)lastWatchVideoID;
- (void)fetchAfterWatchWordsListWithFirst:completion:;
- (id)suggestLogId;
- (void)setSuggestLogId:;
- (void)setGroupID:;
- (id)groupID;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end

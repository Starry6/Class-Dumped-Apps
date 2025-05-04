@interface AWEAwemeIDsStorage : NSObject
@property (nonatomic) NSMutableDictionary leadingVideosInsertAwemeInfoDict;
@property (nonatomic) NSMutableDictionary customVideosInsertAwemeInfoDict;
@property (nonatomic) NSMapTable implementTable;
- (id)leadingVideosInfoForFeed:;
- (void)clearLeadingVideosInsertInfoForFeed:;
- (id)leadingVideosInsertQueryParamsForFeed:;
- (void)addLeadingVideosInsertAwemeIDs:toFeed:;
- (id)leadingVideosInsertAwemeInfoDict;
- (void)addLeadingVideosInsertAwemeIDs:extraInfo:toFeed:;
- (void)addCustomVideosInsertAwemeIDs:extraInfo:toFeed:;
- (id)implementTable;
- (void)addCustomVideosInsertAwemeIDs:extraInfo:toFeed:completion:;
- (id)customVideosInsertAwemeInfoDict;
- (id)leadingVideosInsertAwemeIDsForFeed:;
- (void)addCustomVideosInsertAwemeIDs:toFeed:;
- (void)refreshInsertRoomID:extraInfo:toFeed:;
- (void)addCustomVideosInsertImp:toFeed:;
- (id)customVideoInsertInfoForFeed:;
- (void)setLeadingVideosInsertAwemeInfoDict:;
- (void)setCustomVideosInsertAwemeInfoDict:;
- (void)setImplementTable:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end

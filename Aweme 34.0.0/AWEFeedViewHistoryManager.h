@interface AWEFeedViewHistoryManager : NSObject
@property (nonatomic) NSMutableArray cachedItemIDs;
@property (nonatomic) NSMutableArray cachedInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getHistoryItemIDInfos;
- (id)getHistoryAuthorIDInfos;
- (id)arrayToJsonString:;
- (void)addHistory:index:;
- (id)cachedItemIDs;
- (id)cachedInfo;
- (void)setCachedItemIDs:;
- (void)setCachedInfo:;
- (long long)capacity;
- (void).cxx_destruct;
+ (id)shareInstance;
@end

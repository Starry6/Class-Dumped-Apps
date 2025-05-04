@interface AWESearchQueryManager : NSObject
@property (nonatomic) NSMutableArray queryArray;
@property (nonatomic) NSMutableArray gidQueryArray;
@property (nonatomic) NSString cacheGid;
@property (nonatomic) NSMutableArray globalQueryArray;
@property (nonatomic) NSString lastQuery;
- (id)getGlobalSearchedQueryList:;
- (void)setLastQuery:;
- (id)lastQuery;
- (void)clearSearchedGidQueryListWithGid:;
- (id)getSearchedQueryList;
- (void)setQueryArray:;
- (void)setGidQueryArray:;
- (void)setGlobalQueryArray:;
- (void)saveGidQuery:gid:;
- (id)queryArray;
- (id)globalQueryArray;
- (id)gidQueryArray;
- (void)setCacheGid:;
- (id)cacheGid;
- (id)getSearchedGidQueryListWithGid:;
- (void)saveQuery:gid:maxCount:refer:;
- (void)saveGlobalQuery:gid:maxCount:refer:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end

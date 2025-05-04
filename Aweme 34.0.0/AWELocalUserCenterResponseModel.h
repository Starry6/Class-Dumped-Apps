@interface AWELocalUserCenterResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray tableModels;
@property (nonatomic) NSString tableMeta;
@property (nonatomic) NSString pageParam;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q syncType;
@property (nonatomic) NSString currentUserID;
- (void)setCurrentUserID:;
- (id)tableMeta;
- (void)setTableMeta:;
- (id)pageParam;
- (void)setPageParam:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setSyncType:;
- (void).cxx_destruct;
- (long long)syncType;
- (id)currentUserID;
- (void)setTableModels:;
- (id)tableModels;
+ (id)tableModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

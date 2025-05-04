@interface AWEClassroomImpl.ClassroomDetailRecommendModel : MTLModel
@property (nonatomic) NSArray dataList;
@property (nonatomic) NSString nextCursor;
@property (nonatomic) BOOL hasMore;
- (id)nextCursor;
- (void)setNextCursor:;
- (void)setDataList:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)dataList;
+ (id)dataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

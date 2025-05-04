@interface AWEHotSearchCommentAISummaryResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray viewPointList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
- (id)viewPointList;
- (void)setViewPointList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)viewPointListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

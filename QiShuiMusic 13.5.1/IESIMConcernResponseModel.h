@interface IESIMConcernResponseModel : IESIMBaseApiModel
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) NSNumber fetchRecommend;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray cardList;
@property (nonatomic) NSNumber showUploadContactNotice;
@property (nonatomic) NSNumber isRecommed;
- (id)cardList;
- (id)fetchRecommend;
- (id)isRecommed;
- (id)maxCursor;
- (id)minCursor;
- (void)setCardList:;
- (void)setFetchRecommend:;
- (void)setIsRecommed:;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)setShowUploadContactNotice:;
- (id)showUploadContactNotice;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
+ (id)cardListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

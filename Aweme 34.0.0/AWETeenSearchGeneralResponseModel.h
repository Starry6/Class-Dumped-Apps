@interface AWETeenSearchGeneralResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray cardList;
@property (nonatomic) NSString searchID;
@property (nonatomic) Q cursor;
@property (nonatomic) BOOL hasMore;
- (id)cardList;
- (void)setCardList:;
- (unsigned long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)searchID;
- (void)setSearchID:;
+ (id)hasMoreJSONTransformer;
+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

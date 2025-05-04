@interface AWEMixTabResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray mixCards;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
- (id)mixCards;
- (void)setMixCards:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)mixCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

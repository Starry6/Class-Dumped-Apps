@interface AWELifeShelfResponseUpdateModel : AWEBaseApiModel
@property (nonatomic) NSArray cardList;
@property (nonatomic) NSNumber serverTime;
@property (nonatomic) NSString version;
- (id)cardList;
- (void)setServerTime:;
- (void)setCardList:;
- (id)version;
- (id)serverTime;
- (void)setVersion:;
- (void).cxx_destruct;
+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

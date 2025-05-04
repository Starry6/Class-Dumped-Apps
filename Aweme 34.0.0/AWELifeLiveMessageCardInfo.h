@interface AWELifeLiveMessageCardInfo : MTLModel
@property (nonatomic) AWELifeShelfCardListItemCardData cardData;
@property (nonatomic) NSString cardId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)cardId;
- (id)cardData;
- (void)setCardData:;
- (void)setCardId:;
+ (id)cardDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

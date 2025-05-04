@interface AWEProfileCardEntriesInfoV3Model : MTLModel
@property (nonatomic) NSArray cardsDefaultOrder;
@property (nonatomic) NSArray displayCardIdList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)displayCardIdList;
- (id)cardsDefaultOrder;
- (void)setCardsDefaultOrder:;
- (void)setDisplayCardIdList:;
- (void).cxx_destruct;
+ (id)cardsDefaultOrderJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

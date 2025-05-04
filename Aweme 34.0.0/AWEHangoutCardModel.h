@interface AWEHangoutCardModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) AWEHangoutSearchCardModel searchCard;
@property (nonatomic) AWEHangoutOperationCardModel operationCard;
@property (nonatomic) AWEHangoutLightSatisfactionCardModel lightSatisfactionCard;
@property (nonatomic) AWEHangoutJumpSatisfactionCardModel jumpSatisfactionCard;
@property (nonatomic) AWECodeGenInsertItemCardModel insertItemCard;
@property (nonatomic) AWEHangoutCommonLynxCardModel commonLynxCard;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonLynxCard;
- (id)insertItemCard;
- (id)operationCard;
- (void)setOperationCard:;
- (id)searchCard;
- (void)setSearchCard:;
- (id)lightSatisfactionCard;
- (void)setLightSatisfactionCard:;
- (id)jumpSatisfactionCard;
- (void)setJumpSatisfactionCard:;
- (void)setInsertItemCard:;
- (void)setCommonLynxCard:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

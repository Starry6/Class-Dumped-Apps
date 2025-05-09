@interface IESECFeedResourceCardModel : MTLModel
@property (nonatomic) Q cardType;
@property (nonatomic) q insertPosition;
@property (nonatomic) IESECURLModel cardBackgroundImage;
@property (nonatomic) IESECFeedResourceCardHeaderModel headerNode;
@property (nonatomic) IESECFeedResourceCardWindowModel windowNode;
@property (nonatomic) IESECFeedResourceCardPanelsModel panelsNode;
@property (nonatomic) IESECFeedResourceCardShopModel shopNode;
@property (nonatomic) IESECFeedResourceCardButtonModel buttonNode;
@property (nonatomic) IESECFeedResourceCardCouponModel couponNode;
@property (nonatomic) IESECFeedResourceCardLynxModel lynxNode;
@property (nonatomic) IESECFeedResourceCardListModel listNode;
@property (nonatomic) IESECFeedResourceCardSearchModel searchNode;
@property (nonatomic) IESECGoodsDetailParameters goodsDetailParameter;
@property (nonatomic) NSString sessionTime;
@property (nonatomic) q abvpos;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString searchProductId;
@property (nonatomic) q guessIndex;
@property (nonatomic) NSString noFrequencyControl;
@property (nonatomic) IESECFeedResourceCardLynxCommonModel lynxCommonCard;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)searchProductId;
- (void)setSessionTime:;
- (long long)abvpos;
- (id)buttonNode;
- (id)couponNode;
- (id)goodsDetailParameter;
- (long long)guessIndex;
- (id)headerNode;
- (long long)insertPosition;
- (id)listNode;
- (id)lynxCommonCard;
- (id)lynxNode;
- (id)noFrequencyControl;
- (id)panelsNode;
- (id)searchNode;
- (id)sessionTime;
- (void)setAbvpos:;
- (void)setButtonNode:;
- (void)setCouponNode:;
- (void)setGoodsDetailParameter:;
- (void)setGuessIndex:;
- (void)setHeaderNode:;
- (void)setInsertPosition:;
- (void)setListNode:;
- (void)setLynxCommonCard:;
- (void)setLynxNode:;
- (void)setNoFrequencyControl:;
- (void)setPanelsNode:;
- (void)setSearchNode:;
- (void)setSearchProductId:;
- (void)setShopNode:;
- (void)setWindowNode:;
- (id)shopNode;
- (id)windowNode;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (unsigned long long)cardType;
- (void)setCardType:;
- (id)cardBackgroundImage;
- (void)setCardBackgroundImage:;
+ (id)JSONKeyPathsByPropertyKey;
@end

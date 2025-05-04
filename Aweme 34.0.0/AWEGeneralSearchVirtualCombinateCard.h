@interface AWEGeneralSearchVirtualCombinateCard : NSObject
@property (nonatomic) NSArray subCardList;
@property (nonatomic) NSNumber cardRank;
@property (nonatomic) AWEGeneralSearchModel model;
- (id)cardRank;
- (void)setCardRank:;
- (void)setSubCardList:;
- (id)initWithGeneralSearchModel:;
- (BOOL)isSubCardParentCombinateCardWithsubCardModel:;
- (id)combinateCardAwemeListWithSubCardModel:;
- (id)subCardList;
- (id)subCardList:;
- (void)attachWithVirtualCombinateCard;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
@end

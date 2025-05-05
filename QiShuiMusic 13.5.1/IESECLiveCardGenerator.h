@interface IESECLiveCardGenerator : NSObject
@property (nonatomic) <IESECLiveCardViewDelegate> delegate;
- (id)p_auctionCardViewWithCardModel:;
- (id)p_relatedCardViewWithCardModel:;
- (id)emptyCardView;
- (id)goodsCardViewWithData:;
- (id)goodsCardViewWithModel:;
- (id)goodsCardViewWithParams:;
- (id)initWithLiveCardViewDelegate:;
- (id)p_goodsCardViewWithCardModel:;
- (id)p_lynxCardViewWithParams:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end

@interface IESECGoodsDetailRecommendEventHandler : IESECGoodsDetailEventHandler
- (void)handleEventWithEventID:trackParams:businessParams:completion:;
- (void)tapRecommendFeedback;
- (void)tapRecommendLiveCard;
- (void)tapRecommendProduct;
- (void)tapRecommendRankingList;
+ (id)eventComponentID;
@end

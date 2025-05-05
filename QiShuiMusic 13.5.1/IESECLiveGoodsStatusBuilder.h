@interface IESECLiveGoodsStatusBuilder : NSObject
@property (nonatomic) <IESECLiveGoodsStatusModel> statusModel;
- (long long)goodsStatus;
- (id)initWithStatusModel:;
- (long long)saleStatusAnchor;
- (long long)saleStatusAudience;
- (id)statusHintForAnchor;
- (id)statusHintForAudience;
- (long long)stockStatus;
- (void).cxx_destruct;
- (id)statusModel;
- (void)setStatusModel:;
@end

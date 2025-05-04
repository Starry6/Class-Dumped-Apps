@interface AWEVideoRepurchaseDataController : NSObject
@property (nonatomic) NSDictionary repurchaseInfoDictionary;
@property (nonatomic) <AWEVideoRepurchaseDataControllerDelegate> delegate;
@property (nonatomic) AWEAwemeModel model;
- (id)getOrderBuyRequest;
- (void)requestCouponApplyInfo;
- (id)getRepurchaseInfoRequest;
- (void)dealRepurchaseRequestResponseWithModel:;
- (id)repurchaseRequestParams;
- (void)setRepurchaseInfoDictionary:;
- (id)couponRequestParams;
- (id)orderBuyRequestParams;
- (id)repurchaseInfoDictionary;
- (void)setModel:;
- (id)delegate;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
@end

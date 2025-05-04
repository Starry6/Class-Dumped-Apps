@interface AWEPlayletRequestOrderResponseModel : AWEBaseApiModel
@property (nonatomic) NSString orderIDStr;
@property (nonatomic) NSString paymentIDStr;
@property (nonatomic) NSString cjCashierParam;
@property (nonatomic) NSString cjCashierSDKParam;
- (id)orderIDStr;
- (void)setOrderIDStr:;
- (id)paymentIDStr;
- (void)setPaymentIDStr:;
- (id)cjCashierParam;
- (void)setCjCashierParam:;
- (id)cjCashierSDKParam;
- (void)setCjCashierSDKParam:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

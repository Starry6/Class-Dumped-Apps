@interface CJPayResultPageModel : JSONModel
@property (nonatomic) CJPayTradeInfo tradeInfo;
@property (nonatomic) q remainTime;
@property (nonatomic) NSArray<CJPayPaymentInfo> paymentInfo;
@property (nonatomic) CJPayResultPageInfoModel resultPageInfo;
@property (nonatomic) NSString openSchema;
@property (nonatomic) NSString openUrl;
@property (nonatomic) NSDictionary orderResponse;
- (void)setPaymentInfo:;
- (id)openUrl;
- (id)openSchema;
- (id)orderResponse;
- (id)paymentInfo;
- (long long)remainTime;
- (id)resultPageInfo;
- (void)setOpenSchema:;
- (void)setOpenUrl:;
- (void)setOrderResponse:;
- (void)setRemainTime:;
- (void)setResultPageInfo:;
- (void)setTradeInfo:;
- (id)tradeInfo;
- (void).cxx_destruct;
+ (id)keyMapper;
@end

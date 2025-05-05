@interface CJPayNewIAPOrderCreateResponse : CJPayBaseResponse
@property (nonatomic) NSString appId;
@property (nonatomic) NSString merchantId;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString tradeNo;
@property (nonatomic) NSString outTradeNo;
@property (nonatomic) NSString uuid;
@property (nonatomic) NSString uidEncrypt;
@property (nonatomic) NSString tradeAmount;
- (void)setTradeAmount:;
- (id)tradeNo;
- (id)outTradeNo;
- (void)setOutTradeNo:;
- (void)setTradeNo:;
- (void)setUidEncrypt:;
- (id)toNewIAPOrderCreateModel;
- (id)tradeAmount;
- (id)uidEncrypt;
- (id)appId;
- (id)uid;
- (id)uuid;
- (void)setUid:;
- (void)setUuid:;
- (void)setAppId:;
- (void).cxx_destruct;
- (id)merchantId;
- (void)setMerchantId:;
+ (id)keyMapper;
@end

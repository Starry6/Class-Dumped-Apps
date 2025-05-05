@interface WXChooseInvoiceReq : BaseReq
@property (nonatomic) NSString appID;
@property (nonatomic) I shopID;
@property (nonatomic) NSString signType;
@property (nonatomic) NSString cardSign;
@property (nonatomic) I timeStamp;
@property (nonatomic) NSString nonceStr;
- (id)cardSign;
- (id)nonceStr;
- (void)setCardSign:;
- (void)setNonceStr:;
- (void)setShopID:;
- (unsigned int)shopID;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
- (unsigned int)timeStamp;
- (void)setTimeStamp:;
- (id)signType;
- (void)setSignType:;
@end

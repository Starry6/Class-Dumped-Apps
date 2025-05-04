@interface AWEYAPTransferAccountsCreateOrderModel : AWEBaseApiModel
@property (nonatomic) NSString orderId;
@property (nonatomic) NSString bizCode;
@property (nonatomic) NSString bizMsg;
@property (nonatomic) NSString yapCashDeskInfo;
@property (nonatomic) NSString verificationInfo;
@property (nonatomic) NSString yapMode;
@property (nonatomic) NSString yapManageUrl;
- (id)bizCode;
- (id)orderId;
- (void)setOrderId:;
- (id)yapMode;
- (id)yapCashDeskInfo;
- (void)setBizCode:;
- (id)bizMsg;
- (id)verificationInfo;
- (id)yapManageUrl;
- (void)setVerificationInfo:;
- (void)setBizMsg:;
- (void)setYapCashDeskInfo:;
- (void)setYapMode:;
- (void)setYapManageUrl:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

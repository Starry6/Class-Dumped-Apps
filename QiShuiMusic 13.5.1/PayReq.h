@interface PayReq : BaseReq
@property (nonatomic) NSString partnerId;
@property (nonatomic) NSString prepayId;
@property (nonatomic) NSString nonceStr;
@property (nonatomic) I timeStamp;
@property (nonatomic) NSString package;
@property (nonatomic) NSString sign;
- (id)nonceStr;
- (id)partnerId;
- (id)prepayId;
- (void)setNonceStr:;
- (void)setPartnerId:;
- (void)setPrepayId:;
- (void)setSign:;
- (id)sign;
- (void)setPackage:;
- (id)package;
- (void).cxx_destruct;
- (unsigned int)timeStamp;
- (void)setTimeStamp:;
@end

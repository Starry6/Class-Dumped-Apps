@interface BDXBridgeLocalPhoneNoMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber code;
@property (nonatomic) NSString from;
@property (nonatomic) NSString phoneMask;
@property (nonatomic) NSNumber maskErrorCode;
@property (nonatomic) NSString verifyToken;
@property (nonatomic) NSNumber tokenErrorCode;
- (void)setVerifyToken:;
- (id)maskErrorCode;
- (id)phoneMask;
- (void)setMaskErrorCode:;
- (void)setPhoneMask:;
- (void)setTokenErrorCode:;
- (id)tokenErrorCode;
- (id)verifyToken;
- (id)code;
- (void).cxx_destruct;
- (void)setCode:;
- (id)from;
- (void)setFrom:;
+ (id)JSONKeyPathsByPropertyKey;
@end

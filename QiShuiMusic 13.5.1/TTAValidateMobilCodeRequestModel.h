@interface TTAValidateMobilCodeRequestModel : NSObject
@property (nonatomic) NSString mobile;
@property (nonatomic) NSString codeString;
@property (nonatomic) q smsCodeType;
@property (nonatomic) BOOL needMix;
@property (nonatomic) NSString verifyTicket;
@property (nonatomic) NSDictionary extraDic;
- (BOOL)needMix;
- (void)setSmsCodeType:;
- (id)codeString;
- (id)extraDic;
- (void)setCodeString:;
- (void)setExtraDic:;
- (void)setNeedMix:;
- (void)setVerifyTicket:;
- (long long)smsCodeType;
- (id)verifyTicket;
- (id)init;
- (void).cxx_destruct;
- (id)mobile;
- (void)setMobile:;
@end

@interface AWEPaySKMCheckCodeValidModel : CJPayBaseResponse
@property (nonatomic) NSString errCode;
@property (nonatomic) NSString errMsg;
@property (nonatomic) NSString codeStatus;
@property (nonatomic) NSString codeAddressInfo;
@property (nonatomic) NSString msgHint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errCode;
- (id)errMsg;
- (id)msgHint;
- (void)setMsgHint:;
- (void)setErrMsg:;
- (void)setErrCode:;
- (id)codeAddressInfo;
- (id)codeStatus;
- (void)setCodeStatus:;
- (void)setCodeAddressInfo:;
- (void).cxx_destruct;
- (BOOL)isSuccess;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

@interface AWEPaySKMRefreshCodeModel : CJPayBaseResponse
@property (nonatomic) NSString errCode;
@property (nonatomic) NSString errMsg;
@property (nonatomic) NSString codeUrl;
@property (nonatomic) NSString codeToken;
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
- (id)codeUrl;
- (void)setCodeUrl:;
- (id)codeToken;
- (void)setCodeToken:;
- (void).cxx_destruct;
- (BOOL)isSuccess;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

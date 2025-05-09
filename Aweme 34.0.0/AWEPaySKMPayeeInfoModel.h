@interface AWEPaySKMPayeeInfoModel : CJPayBaseResponse
@property (nonatomic) NSString codeUserId;
@property (nonatomic) NSString codeUserType;
@property (nonatomic) NSString maskName;
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString remarkName;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString errMsg;
@property (nonatomic) NSString errCode;
@property (nonatomic) NSString msgHint;
@property (nonatomic) BOOL isPersonalCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)remarkName;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)errCode;
- (id)errMsg;
- (id)msgHint;
- (void)setMsgHint:;
- (id)maskName;
- (void)setErrMsg:;
- (void)setErrCode:;
- (void)setRemarkName:;
- (id)codeUserId;
- (void)setCodeUserId:;
- (id)codeUserType;
- (void)setCodeUserType:;
- (void)setMaskName:;
- (BOOL)isPersonalCode;
- (void)setIsPersonalCode:;
- (id)displayName;
- (void)setNickName:;
- (void).cxx_destruct;
- (BOOL)isSuccess;
- (id)nickName;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

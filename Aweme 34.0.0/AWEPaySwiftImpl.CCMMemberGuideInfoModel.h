@interface AWEPaySwiftImpl.CCMMemberGuideInfoModel : MTLModel
@property (nonatomic) _TtC15AWEPaySwiftImpl19CCMVerifyMemberInfo verifyMemberInfo;
@property (nonatomic) _TtC15AWEPaySwiftImpl13CCMSetPwdInfo setPwdInfo;
@property (nonatomic) _TtC15AWEPaySwiftImpl15CCMBindCardInfo bindCardInfo;
@property (nonatomic) _TtC15AWEPaySwiftImpl17CCMCreateAuthInfo createAuthInfo;
- (id)verifyMemberInfo;
- (void)setVerifyMemberInfo:;
- (id)setPwdInfo;
- (void)setSetPwdInfo:;
- (id)bindCardInfo;
- (void)setBindCardInfo:;
- (id)createAuthInfo;
- (void)setCreateAuthInfo:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end

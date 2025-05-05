@interface BDXALoginConfiguration : BDXAConfiguration
@property (nonatomic) BDXAPageContent commonPageContent;
@property (nonatomic) q passwordLoginMode;
@property (nonatomic) BOOL loginOnly;
@property (nonatomic) NSDictionary loginTypeToLoginVCNameDic;
@property (nonatomic) NSDictionary loginTypeToPageContentDictionary;
- (id)commonPageContent;
- (id)initWithCommonPageContent:;
- (BOOL)loginOnly;
- (id)loginTypeToLoginVCNameDic;
- (id)loginTypeToPageContentDictionary;
- (id)p_pageContentForLoginType:;
- (id)pageContentForLoginType:;
- (long long)passwordLoginMode;
- (void)setCommonPageContent:;
- (void)setLoginOnly:;
- (void)setLoginTypeToLoginVCNameDic:;
- (void)setLoginTypeToPageContentDictionary:;
- (void)setPasswordLoginMode:;
- (void).cxx_destruct;
@end

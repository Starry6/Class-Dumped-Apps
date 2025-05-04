@interface AWEThirdLoginJumpModel : AWEBaseApiModel
@property (nonatomic) Q loginPlatform;
@property (nonatomic) BOOL isJump;
@property (nonatomic) NSString jumpURL;
- (id)jumpURL;
- (void)setJumpURL:;
- (unsigned long long)loginPlatform;
- (void)setLoginPlatform:;
- (BOOL)isJump;
- (void)setIsJump:;
- (void).cxx_destruct;
+ (id)loginPlatformJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

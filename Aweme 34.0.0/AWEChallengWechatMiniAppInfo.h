@interface AWEChallengWechatMiniAppInfo : MTLModel
@property (nonatomic) NSNumber wechatSkipType;
@property (nonatomic) NSNumber wechatOpenMethod;
@property (nonatomic) NSString userName;
@property (nonatomic) NSString path;
@property (nonatomic) NSString linkText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)wechatOpenMethod;
- (id)wechatSkipType;
- (void)setWechatSkipType:;
- (void)setWechatOpenMethod:;
- (id)path;
- (id)userName;
- (void).cxx_destruct;
- (void)setPath:;
- (void)setUserName:;
- (id)linkText;
- (void)setLinkText:;
+ (id)JSONKeyPathsByPropertyKey;
@end

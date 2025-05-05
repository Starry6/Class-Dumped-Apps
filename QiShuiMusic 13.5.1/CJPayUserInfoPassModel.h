@interface CJPayUserInfoPassModel : JSONModel
@property (nonatomic) CJPayPassExtModel extModel;
@property (nonatomic) NSDictionary extDic;
@property (nonatomic) BOOL isNeedLogin;
@property (nonatomic) q passportStauts;
@property (nonatomic) NSString redirectUrl;
@property (nonatomic) NSString url;
- (void)setIsNeedLogin:;
- (id)extDic;
- (id)extModel;
- (BOOL)isNeedLogin;
- (long long)passportStauts;
- (void)setExtDic:;
- (void)setExtModel:;
- (void)setPassportStauts:;
- (id)url;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)redirectUrl;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

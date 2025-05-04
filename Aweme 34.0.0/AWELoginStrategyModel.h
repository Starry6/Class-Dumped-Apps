@interface AWELoginStrategyModel : MTLModel
@property (nonatomic) AWELoginStrategyMethodModel loginModel;
@property (nonatomic) AWELoginStrategyMethodModel logoutModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLoginModel:;
- (id)loginModel;
- (id)logoutModel;
- (void)setLogoutModel:;
- (void).cxx_destruct;
+ (id)logoutModelJSONTransformer;
+ (id)loginModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

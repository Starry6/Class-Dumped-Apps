@interface IESECShopHybridSecurityJSBParamSetting : MTLModel
@property (nonatomic) NSArray matchRegex;
@property (nonatomic) NSArray blockRegex;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)blockRegex;
- (id)matchRegex;
- (void)setBlockRegex:;
- (void)setMatchRegex:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

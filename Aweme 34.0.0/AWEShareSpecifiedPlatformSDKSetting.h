@interface AWEShareSpecifiedPlatformSDKSetting : MTLModel
@property (nonatomic) BOOL SDKEnable;
@property (nonatomic) NSArray targetShareTypes;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)SDKEnable;
- (id)targetShareTypes;
- (void)setSDKEnable:;
- (void)setTargetShareTypes:;
- (void).cxx_destruct;
+ (id)targetShareTypesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

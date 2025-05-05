@interface BDXBridgeAuthPatternRule : MTLModel
@property (nonatomic) BOOL isCompatible;
@property (nonatomic) NSNumber appID;
@property (nonatomic) NSString pattern;
@property (nonatomic) q group;
@property (nonatomic) NSSet includedMethods;
@property (nonatomic) NSSet excludedMethods;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)excludedMethods;
- (id)includedMethods;
- (id)pattern;
- (long long)group;
- (id)appID;
- (void).cxx_destruct;
- (BOOL)isCompatible;
+ (id)excludedMethodsJSONTransformer;
+ (id)groupJSONTransformer;
+ (id)includedMethodsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

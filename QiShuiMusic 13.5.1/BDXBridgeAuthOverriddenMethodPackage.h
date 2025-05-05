@interface BDXBridgeAuthOverriddenMethodPackage : MTLModel
@property (nonatomic) NSSet publicMethods;
@property (nonatomic) NSSet protectedMethods;
@property (nonatomic) NSSet privateMethods;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)privateMethods;
- (id)protectedMethods;
- (id)publicMethods;
- (void).cxx_destruct;
+ (id)protectedMethodsJSONTransformer;
+ (id)privateMethodsJSONTransformer;
+ (id)publicMethodsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

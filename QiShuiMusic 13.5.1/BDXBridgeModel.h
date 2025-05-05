@interface BDXBridgeModel : MTLModel
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) BDXBridgeContext bridgeContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bridgeContext;
- (void)setBridgeContext:;
- (void)setExtraInfo:;
- (void).cxx_destruct;
- (id)extraInfo;
+ (id)bridgeContextJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;
@end

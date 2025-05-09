@interface BDXBridgeAuthModelContentV2BizConfig : MTLModel
@property (nonatomic) q type;
@property (nonatomic) NSArray safeURLs;
@property (nonatomic) BDXBridgeAuthModelContentV2PublicKey publicKey;
@property (nonatomic) q group;
@property (nonatomic) NSSet includedMethods;
@property (nonatomic) NSSet excludedMethods;
@property (nonatomic) NSDictionary methodCallLimitDictionary;
@property (nonatomic) NSNumber feAuthVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)excludedMethods;
- (id)includedMethods;
- (id)feAuthVersion;
- (id)methodCallLimitDictionary;
- (id)safeURLs;
- (id)publicKey;
- (long long)group;
- (long long)type;
- (void).cxx_destruct;
+ (id)excludedMethodsJSONTransformer;
+ (id)groupJSONTransformer;
+ (id)includedMethodsJSONTransformer;
+ (id)methodCallLimitDictionaryJSONTransformer;
+ (id)publicKeyJSONTransformer;
+ (id)safeURLsJSONTransformer;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

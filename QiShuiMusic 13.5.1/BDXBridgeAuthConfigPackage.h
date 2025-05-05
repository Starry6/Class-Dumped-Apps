@interface BDXBridgeAuthConfigPackage : MTLModel
@property (nonatomic) NSDictionary content;
@property (nonatomic) NSDictionary contentV2;
@property (nonatomic) BDXBridgeAuthLynxSettings lynxAuthSettings;
@property (nonatomic) NSNumber packageVersion;
@property (nonatomic) q packageType;
@property (nonatomic) NSString channel;
@property (nonatomic) q channelIndex;
@property (nonatomic) BDXBridgeAuthOverriddenMethodPackage overriddenMethodPackage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contentV2;
- (id)lynxAuthSettings;
- (id)overriddenMethodPackage;
- (id)packageVersion;
- (id)content;
- (id)channel;
- (void).cxx_destruct;
- (long long)channelIndex;
- (long long)packageType;
+ (id)lynxAuthSettingsJSONTransformer;
+ (id)contentJSONTransformer;
+ (id)contentV2JSONTransformer;
+ (id)overriddenMethodPackageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

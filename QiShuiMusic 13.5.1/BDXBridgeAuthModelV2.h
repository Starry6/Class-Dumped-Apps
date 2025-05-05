@interface BDXBridgeAuthModelV2 : MTLModel
@property (nonatomic) NSDictionary bizConfigs;
@property (nonatomic) BDXBridgeLynxAuthSettings lynxAuthSettings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bizConfigs;
- (id)lynxAuthSettings;
- (void)setBizConfigs:;
- (void)setLynxAuthSettings:;
- (void).cxx_destruct;
+ (id)lynxAuthSettingsJSONTransformer;
+ (id)bizConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

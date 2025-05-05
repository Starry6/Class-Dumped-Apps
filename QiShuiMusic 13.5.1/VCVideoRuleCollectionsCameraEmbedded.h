@interface VCVideoRuleCollectionsCameraEmbedded : VCVideoRuleCollectionsCamera
- (void)dealloc;
- (id)description;
- (double)preferredAspectRatio;
- (id)initWithHardwareSettings:;
- (void)initSupportedPayloads;
- (BOOL)setupRules;
- (BOOL)setupH264Rules;
- (BOOL)setupHEVCRules;
- (id)bitrateConfiguration;
- (id)hardwareConfigurationForPayload:transportType:;
- (BOOL)isPreferredVideoRule:preferredFormat:;
- (BOOL)setupVideoRulesForPayload:transportType:encodingType:formatList:formatListCount:preferredFormat:supportsHighDef:;
- (BOOL)supportsHEVCWifiDecoding;
- (BOOL)supportsHEVCWifiEncoding;
+ (id)sharedInstance;
@end

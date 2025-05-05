@interface VCVideoRuleCollectionsScreenAirplayEmbedded : VCVideoRuleCollectionsScreenAirplay
- (id)initWithHardwareSettings:;
- (void)initSupportedPayloads;
- (BOOL)setupRules;
- (BOOL)setupH264Rules;
- (BOOL)setupHEVCRules;
- (unsigned int)tilesPerFrame:hdrMode:;
- (void)selectPreferredRule:screenSize:;
+ (id)sharedInstance;
@end

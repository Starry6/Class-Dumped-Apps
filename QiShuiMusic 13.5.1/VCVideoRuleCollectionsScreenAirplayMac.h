@interface VCVideoRuleCollectionsScreenAirplayMac : VCVideoRuleCollectionsScreenAirplay
- (id)initWithHardwareSettings:;
- (void)initSupportedPayloads;
- (BOOL)setupRules;
- (BOOL)setupH264Rules;
- (BOOL)setupHEVCRules;
- (unsigned int)tilesPerFrame:hdrMode:;
+ (id)sharedInstance;
@end

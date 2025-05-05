@interface VCVideoRuleCollectionsScreenSecondaryEmbedded : VCVideoRuleCollectionsScreenSecondary
- (id)initWithHardwareSettings:;
- (void)initSupportedPayloads;
- (BOOL)setupRules;
- (BOOL)setupH264Rules;
- (BOOL)setupHEVCRules;
- (unsigned int)tilesPerFrame:;
- (void)selectPreferredRule:screenSize:;
+ (id)sharedInstance;
@end

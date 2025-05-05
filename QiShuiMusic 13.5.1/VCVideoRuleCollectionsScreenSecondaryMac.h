@interface VCVideoRuleCollectionsScreenSecondaryMac : VCVideoRuleCollectionsScreenSecondary
- (id)initWithHardwareSettings:;
- (void)initSupportedPayloads;
- (BOOL)setupRules;
- (BOOL)setupH264Rules;
- (BOOL)setupHEVCRules;
- (unsigned int)tilesPerFrame:;
+ (id)sharedInstance;
@end

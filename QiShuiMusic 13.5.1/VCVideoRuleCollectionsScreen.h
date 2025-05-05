@interface VCVideoRuleCollectionsScreen : VCVideoRuleCollections
- (id)initWithHardwareSettings:;
- (void)initSupportedPayloads;
- (BOOL)setupH264Rules;
- (void)selectPreferredRule:screenSize:;
- (id)initForMacDecodingOnly;
- (BOOL)setupMacDecodingOnlyRules;
+ (id)sharedInstance;
@end

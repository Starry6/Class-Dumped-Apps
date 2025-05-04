@interface AWESECAppJumpSettingsDecisionMaker : NSObject
@property (nonatomic) NSArray certStatementKeys;
@property (nonatomic) NSArray allowListKeys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)isURLInAllowList:;
- (id)pipelineCheck:withEvent:;
- (id)precisionCheck:withCertToken:;
- (id)probeCheck:withCertToken:;
- (id)uncaughtCheck:certToken:;
- (BOOL)checkIsURLInAllowListDict:URL:key:;
- (BOOL)matchStrategies:WithURL:WithCertToken:;
- (BOOL)isFixedConstraintEmpty:;
- (id)getCertInfo:WithCategory:;
- (BOOL)matchContent:matchRule:pattern:;
- (id)certStatementKeys;
- (void)setCertStatementKeys:;
- (id)allowListKeys;
- (void)setAllowListKeys:;
- (id)init;
- (void).cxx_destruct;
@end

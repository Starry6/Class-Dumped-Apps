@interface VCVideoRuleCollectionsRemoteCamera : VCVideoRuleCollections
- (unsigned int)tilesPerFrame;
- (BOOL)setupHEVCRules;
+ (id)sharedInstance;
@end

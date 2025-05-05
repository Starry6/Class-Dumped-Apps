@interface VCVideoRuleCollectionsCamera : VCVideoRuleCollections
- (double)preferredAspectRatio;
- (BOOL)useSoftFramerateSwitching;
- (void)resetEncodingRulesForCameraIsHD:isWVGA:is1080:;
- (BOOL)setupH264CellularRules;
- (id)bestVideoRuleForEncodingType:aspectRatio:payload:;
- (id)bestVideoRuleForEncodingType:aspectRatio:;
- (BOOL)isHiDefCapable;
- (BOOL)getBestFrameWidth:frameHeight:frameRate:;
- (id)bitrateConfiguration;
+ (id)sharedInstance;
@end

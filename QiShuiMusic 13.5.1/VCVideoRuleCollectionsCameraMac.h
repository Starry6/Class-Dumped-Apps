@interface VCVideoRuleCollectionsCameraMac : VCVideoRuleCollectionsCamera
- (void)dealloc;
- (double)preferredAspectRatio;
- (BOOL)useSoftFramerateSwitching;
- (id)initWithHardwareSettings:;
- (void)initSupportedPayloads;
- (BOOL)setupRules;
- (BOOL)setupH264Rules;
- (BOOL)setupHEVCRules;
- (void)computeEncodingScore;
- (void)computeDecodingScore;
- (BOOL)setupH264WifiRules;
- (BOOL)setUp1080pRules:;
- (void)_addWVGAEncodingRules;
- (void)_removeRulesGreaterThanVGA;
- (void)_removeRulesGreaterThan720p;
- (void)_resetJ92EncodingRulesForCameraIsHD:isWVGA:is1080:;
- (void)resetEncodingRulesForCameraIsHD:isWVGA:is1080:;
+ (id)sharedInstance;
@end

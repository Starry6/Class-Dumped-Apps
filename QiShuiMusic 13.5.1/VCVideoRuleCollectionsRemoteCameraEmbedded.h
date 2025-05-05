@interface VCVideoRuleCollectionsRemoteCameraEmbedded : VCVideoRuleCollectionsRemoteCamera
- (id)initWithHardwareSettings:;
- (BOOL)initSupportedPayloads;
+ (id)sharedInstance;
@end

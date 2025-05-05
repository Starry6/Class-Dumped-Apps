@interface VCVideoRuleCollectionsRemoteCameraMac : VCVideoRuleCollectionsRemoteCamera
- (id)initWithHardwareSettings:;
- (BOOL)initSupportedPayloads;
+ (id)sharedInstance;
@end

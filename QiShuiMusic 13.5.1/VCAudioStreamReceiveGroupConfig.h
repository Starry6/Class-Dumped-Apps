@interface VCAudioStreamReceiveGroupConfig : VCMediaStreamGroupConfig
@property (nonatomic) VCAudioCaptionsCoordinator captionsCoordinator;
@property (nonatomic) VCAudioStreamGroupCommonConfig audioStreamGroupConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)captionsCoordinator;
- (void)setCaptionsCoordinator:;
- (id)audioStreamGroupConfig;
- (void)setAudioStreamGroupConfig:;
@end

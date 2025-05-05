@interface ByteRTCRoomConfig : NSObject
@property (nonatomic) q profile;
@property (nonatomic) BOOL isAutoPublish;
@property (nonatomic) BOOL isAutoSubscribeAudio;
@property (nonatomic) BOOL isAutoSubscribeVideo;
@property (nonatomic) ByteRTCRemoteVideoConfig remoteVideoConfig;
- (void)setIsAutoPublish:;
- (void)setIsAutoSubscribeAudio:;
- (void)setIsAutoSubscribeVideo:;
- (BOOL)isAutoPublish;
- (BOOL)isAutoSubscribeAudio;
- (BOOL)isAutoSubscribeVideo;
- (id)remoteVideoConfig;
- (void)setRemoteVideoConfig:;
- (id)init;
- (void)setProfile:;
- (long long)profile;
- (void).cxx_destruct;
@end

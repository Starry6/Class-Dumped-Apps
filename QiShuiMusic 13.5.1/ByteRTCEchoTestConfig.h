@interface ByteRTCEchoTestConfig : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) NSString roomId;
@property (nonatomic) NSString userId;
@property (nonatomic) NSString token;
@property (nonatomic) BOOL enableAudio;
@property (nonatomic) BOOL enableVideo;
@property (nonatomic) q audioReportInterval;
- (void)setEnableAudio:;
- (BOOL)enableAudio;
- (BOOL)enableVideo;
- (id)roomId;
- (void)setRoomId:;
- (void)setEnableVideo:;
- (long long)audioReportInterval;
- (void)setAudioReportInterval:;
- (id)token;
- (id)userId;
- (id)view;
- (void)setToken:;
- (void).cxx_destruct;
- (void)setUserId:;
- (void)setView:;
@end

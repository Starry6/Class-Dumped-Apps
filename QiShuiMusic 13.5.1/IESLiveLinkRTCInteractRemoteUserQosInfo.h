@interface IESLiveLinkRTCInteractRemoteUserQosInfo : NSObject
@property (nonatomic) NSString user_id;
@property (nonatomic) NSNumber recv_video_bitrate;
@property (nonatomic) NSNumber recv_vdecode_fps;
@property (nonatomic) NSNumber recv_vrender_fps;
@property (nonatomic) NSNumber recv_video_loss;
@property (nonatomic) NSNumber recv_audio_bitrate;
@property (nonatomic) NSNumber recv_audio_volume;
@property (nonatomic) NSNumber recv_audio_delay;
@property (nonatomic) NSNumber recv_audio_loss;
@property (nonatomic) NSNumber recv_audio_rtt;
@property (nonatomic) NSNumber recv_video_rtt;
@property (nonatomic) q lastResetTime;
- (id)recv_video_loss;
- (id)recv_audio_loss;
- (id)getJsonDict;
- (long long)lastResetTime;
- (id)recv_audio_bitrate;
- (id)recv_audio_delay;
- (id)recv_audio_rtt;
- (id)recv_audio_volume;
- (id)recv_vdecode_fps;
- (id)recv_video_bitrate;
- (id)recv_video_rtt;
- (id)recv_vrender_fps;
- (void)setLastResetTime:;
- (void)setRecv_audio_bitrate:;
- (void)setRecv_audio_delay:;
- (void)setRecv_audio_loss:;
- (void)setRecv_audio_rtt:;
- (void)setRecv_audio_volume:;
- (void)setRecv_vdecode_fps:;
- (void)setRecv_video_bitrate:;
- (void)setRecv_video_loss:;
- (void)setRecv_video_rtt:;
- (void)setRecv_vrender_fps:;
- (long long)timeMS;
- (void).cxx_destruct;
- (void)resetValues;
- (id)initWithUid:;
- (id)user_id;
@end

@interface ByteRTCVideoEx : ByteRTCVideo
- (int)setRemoteAudioPlaybackVolume:volume:;
- (id)initWithAppId:delegate:monitorDelegate:parameters:;
- (id)createRTCRoomEx:;
- (int)setVideoSource:videoSourceConfig:;
- (int)pushExternalVideoFrame:videoFrame:;
- (int)pushExternalVideoFrame:videoFrame:time:rotation:extendedData:supplementaryInfo:timestame:;
- (int)setLocalStreamPriority:priority:;
- (int)setVideoCaptureConfig:captureConfig:;
- (int)stopVideoCapture:;
- (int)setCaptureVolume:;
- (int)setScreenCaptureVolume:;
- (int)setAudioSourceVolume:volume:;
- (int)setAudioContentType:config:;
- (int)setAudioEncodeConfig:config:;
+ (id)createRTCVideoEx:delegate:delegateEx:parameters:;
+ (void)destroyRTCVideoEx;
@end

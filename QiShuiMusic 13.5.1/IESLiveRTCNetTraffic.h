@interface IESLiveRTCNetTraffic : NSObject
@property (nonatomic) double remoteVideNetTraffic;
@property (nonatomic) double localVideNetTraffic;
@property (nonatomic) double localAudioNetTraffic;
@property (nonatomic) double remoteAudioNetTraffic;
- (double)totalNetTraffic;
- (void)addRemoteAudioReceivedKBitrate:;
- (void)addLocalAudioSentKBitrate:;
- (void)addLocalVideoSentKBitrate:;
- (void)addRemoteVideoReceiveKBitrate:;
- (double)localAudioNetTraffic;
- (double)localVideNetTraffic;
- (double)remoteAudioNetTraffic;
- (double)remoteVideNetTraffic;
- (void)setLocalAudioNetTraffic:;
- (void)setLocalVideNetTraffic:;
- (void)setRemoteAudioNetTraffic:;
- (void)setRemoteVideNetTraffic:;
- (id)init;
- (void)dealloc;
@end

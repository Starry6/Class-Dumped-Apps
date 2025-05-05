@interface ByteRTCRemoteStreamStats : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) ByteRTCRemoteAudioStats audioStats;
@property (nonatomic) ByteRTCRemoteVideoStats videoStats;
@property (nonatomic) Q txQuality;
@property (nonatomic) Q rxQuality;
@property (nonatomic) BOOL isScreen;
- (id)audioStats;
- (BOOL)isScreen;
- (unsigned long long)rxQuality;
- (void)setIsScreen:;
- (void)setRxQuality:;
- (void)setTxQuality:;
- (unsigned long long)txQuality;
- (id)videoStats;
- (void)setAudioStats:;
- (void)setVideoStats:;
- (id)uid;
- (void)setUid:;
- (void).cxx_destruct;
@end

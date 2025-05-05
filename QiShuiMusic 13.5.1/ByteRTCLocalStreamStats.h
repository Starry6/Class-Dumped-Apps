@interface ByteRTCLocalStreamStats : NSObject
@property (nonatomic) ByteRTCLocalAudioStats audioStats;
@property (nonatomic) ByteRTCLocalVideoStats videoStats;
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
- (void).cxx_destruct;
@end

@interface IESECLiveReplayVolumeRecorder : NSObject
@property (nonatomic) NSNumber enterVolume;
@property (nonatomic) NSNumber startPlayVolume;
- (void)setEnterVolume:;
- (id)startPlayVolume;
- (void)enterPage;
- (id)enterVolume;
- (void)setStartPlayVolume:;
- (void)startPlay;
- (id)volumeInfo;
- (void).cxx_destruct;
- (id)currentVolume;
@end

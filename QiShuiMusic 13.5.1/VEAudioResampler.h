@interface VEAudioResampler : NSObject
@property (nonatomic) IESMMAudioFile audioReader;
@property (nonatomic) AVAssetWriter assetWriter;
@property (nonatomic) AVAssetWriterInput audioInput;
@property (nonatomic) NSInteger outChannels;
@property (nonatomic) NSInteger outSampleRate;
@property (nonatomic) NSInteger outBitrate;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} audioDescription;
- (void)setAudioReader:;
- (void)setOutChannels:;
- (id)audioReader;
- (id)errorWithMsg:;
- (int)outBitrate;
- (int)outChannels;
- (int)outSampleRate;
- (void)resampleAudioWithURL:outChannels:resampleRate:bitRate:completion:;
- (void)resampleAudioWithURL:resampleRate:bitRate:completion:;
- (void)setAudioDescription:;
- (void)setOutBitrate:;
- (void)setOutSampleRate:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)audioInput;
- (void)setAudioInput:;
- (id)assetWriter;
- (void)setAssetWriter:;
- (id)audioDescription;
- (id)resample:;
@end

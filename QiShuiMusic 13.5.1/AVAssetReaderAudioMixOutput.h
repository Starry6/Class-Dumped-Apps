@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput
@property (nonatomic) NSArray audioTracks;
@property (nonatomic) NSDictionary audioSettings;
@property (nonatomic) AVAudioMix audioMix;
@property (nonatomic) NSString audioTimePitchAlgorithm;
- (id)mediaType;
- (id)init;
- (void)dealloc;
- (void)setAudioMix:;
- (id)audioTracks;
- (void)_setAudioTapProcessor:forTrack:;
- (id)_audioVolumeCurveForTrack:;
- (id)audioMix;
- (id)audioTimePitchAlgorithm;
- (BOOL)_enableTrackExtractionReturningError:;
- (void)setAudioTimePitchAlgorithm:;
- (void)_setAudioVolumeCurve:forTrack:;
- (id)description;
- (id)_asset;
- (void)_setAudioTimePitchAlgorithm:forTrack:;
- (id)initWithAudioTracks:audioSettings:;
- (id)_audioTapProcessorForTrack:;
- (id)_audioTimePitchAlgorithmForTrack:;
- (id)audioSettings;
+ (id)assetReaderAudioMixOutputWithAudioTracks:audioSettings:;
@end

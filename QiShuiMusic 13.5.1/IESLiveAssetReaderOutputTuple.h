@interface IESLiveAssetReaderOutputTuple : NSObject
@property (nonatomic) AVAssetReader reader;
@property (nonatomic) AVAssetReaderTrackOutput output;
@property (nonatomic) AVAssetTrack videoTrack;
- (id)output;
- (void)setOutput:;
- (void).cxx_destruct;
- (id)reader;
- (id)videoTrack;
- (void)setVideoTrack:;
- (void)setReader:;
@end

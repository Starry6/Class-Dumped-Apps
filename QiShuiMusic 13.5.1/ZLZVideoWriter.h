@interface ZLZVideoWriter : NSObject
@property (nonatomic) NSURL movieURL;
@property (nonatomic) BOOL alreadyFinishedRecording;
@property (nonatomic) AVAssetWriter assetWriter;
@property (nonatomic) AVAssetWriterInput assetWriterVideoInput;
@property (nonatomic) {CGSize=dd} videoSize;
@property (nonatomic) BOOL hasFinished;
@property (nonatomic) BOOL hasSetStartTime;
@property (nonatomic) BOOL encodingLiveVideo;
@property (nonatomic) BOOL isReadyForMoreData;
- (BOOL)hasSetStartTime;
- (BOOL)alreadyFinishedRecording;
- (id)assetWriterVideoInput;
- (BOOL)encodingLiveVideo;
- (id)initWithMovieURL:size:;
- (BOOL)initializeMovieWithOutputSettings:withFileType:;
- (void)setAlreadyFinishedRecording:;
- (void)setAssetWriterVideoInput:;
- (void)setEncodingLiveVideo:;
- (void)setHasSetStartTime:;
- (void)abort;
- (void)finish;
- (void).cxx_destruct;
- (id)movieURL;
- (BOOL)hasFinished;
- (void)setHasFinished:;
- (id)assetWriter;
- (void)setAssetWriter:;
- (BOOL)addFrame:;
- (BOOL)isReadyForMoreData;
- (id)videoSize;
- (void)setVideoSize:;
- (void)setMovieURL:;
@end

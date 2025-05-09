@interface ICDocCamDebugMovieController : NSObject
@property (nonatomic) q referenceOrientation;
@property (nonatomic) AVCaptureConnection videoConnection;
@property (nonatomic) <ICDocCamDebugMovieControllerDelegate> delegate;
@property (nonatomic) NSURL movieURL;
@property (nonatomic) AVAssetWriter assetWriter;
@property (nonatomic) AVAssetWriterInput assetWriterVideoIn;
@property (nonatomic) AVAssetWriterInput assetWriterMetadataIn;
@property (nonatomic) AVAssetWriterInputMetadataAdaptor assetWriterMetadataAdaptor;
@property (nonatomic) AVAssetWriterInputPixelBufferAdaptor pixelBufferAdaptor;
@property (nonatomic) NSObject<OS_dispatch_queue> movieWritingQueue;
@property (nonatomic) BOOL readyToRecordVideo;
@property (nonatomic) BOOL readyToRecordMetadata;
@property (nonatomic) BOOL recordingWillBeStarted;
@property (nonatomic) BOOL recordingWillBeStopped;
@property (nonatomic) BOOL canRecordFrames;
@property (nonatomic) BOOL recording;
@property (nonatomic) q videoOrientation;
@property (nonatomic) Q backgroundRecordingID;
- (void)recordingDidStop;
- (long long)videoOrientation;
- (void)setDelegate:;
- (void)removeFile:;
- (void)setVideoOrientation:;
- (id)delegate;
- (void)startRecording;
- (void).cxx_destruct;
- (BOOL)isRecording;
- (void)stopRecording;
- (void)setRecording:;
- (void)video:didFinishSavingWithError:contextInfo:;
- (id)movieURL;
- (id)assetWriter;
- (void)setAssetWriter:;
- (id)videoConnection;
- (void)setVideoConnection:;
- (long long)referenceOrientation;
- (void)setMovieURL:;
- (void)pauseCaptureSessionForMovieRecording;
- (void)resumeCaptureSessionForMovieRecording;
- (void)setReferenceOrientation:;
- (id)initWithDelegate:videoConnection:referenceOrientation:;
- (void)recordFrame:fromConnection:;
- (void)recordingWillStart;
- (void)recordingDidStart;
- (void)recordingWillStop;
- (void)writeSampleBuffer:ofType:atFrame:;
- (BOOL)writeMetaDataAtFrame:intrinsicMatrix:;
- (BOOL)setupAssetWriterVideoInput:;
- (BOOL)setupAssetWriterMetadataInputAndMetadataAdaptor;
- (BOOL)inputsReadyToRecord;
- (void)saveMovieToCameraRoll;
- (double)angleOffsetFromPortraitOrientationToOrientation:;
- (id)transformFromCurrentVideoOrientationToOrientation:;
- (id)assetWriterVideoIn;
- (void)setAssetWriterVideoIn:;
- (id)assetWriterMetadataIn;
- (void)setAssetWriterMetadataIn:;
- (id)assetWriterMetadataAdaptor;
- (void)setAssetWriterMetadataAdaptor:;
- (id)pixelBufferAdaptor;
- (void)setPixelBufferAdaptor:;
- (id)movieWritingQueue;
- (void)setMovieWritingQueue:;
- (BOOL)readyToRecordVideo;
- (void)setReadyToRecordVideo:;
- (BOOL)readyToRecordMetadata;
- (void)setReadyToRecordMetadata:;
- (BOOL)recordingWillBeStarted;
- (void)setRecordingWillBeStarted:;
- (BOOL)recordingWillBeStopped;
- (void)setRecordingWillBeStopped:;
- (BOOL)canRecordFrames;
- (void)setCanRecordFrames:;
- (unsigned long long)backgroundRecordingID;
- (void)setBackgroundRecordingID:;
@end

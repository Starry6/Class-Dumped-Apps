@interface IESGLMovieWriter : VERunloopObject
@property (nonatomic) VEAudioEncodeConfig audioSettings;
@property (nonatomic) VELimitLogger limitLogger;
@property (nonatomic) NSDictionary videoSettings;
@property (nonatomic) VEHdrEffectOptFilter hdrEffectOptFilter;
@property (nonatomic) BOOL isPassThrough;
@property (nonatomic) BOOL abHdrEffectOptimization;
@property (nonatomic) BOOL encodeFrameAsHlg;
@property (nonatomic) BOOL abRecordOptimization;
@property (nonatomic) BOOL abRecordLagCountOpt;
@property (nonatomic) BOOL isFristVideoFrame;
@property (nonatomic) BOOL isFristAudioFrame;
@property (nonatomic) double fristAudioTime;
@property (nonatomic) double fristVideoTime;
@property (nonatomic) VEPixelBufferCopyUtils pixelBufferCopyUtils;
@property (nonatomic) ^{__CVBuffer=} encodePixelBuf;
@property (nonatomic) BOOL isMultiEncoder;
@property (nonatomic) HTSGLContext context;
@property (nonatomic) NSString route;
@property (nonatomic) double progressStartTime;
@property (nonatomic) double progressTotalTime;
@property (nonatomic) double progressCurrentTime;
@property (nonatomic) BOOL needStatisticProgress;
@property (nonatomic) BOOL isFromRecorder;
@property (nonatomic) BOOL isAudioReady;
@property (nonatomic) BOOL isVideoReady;
@property (nonatomic) BOOL hasAudioTrack;
@property (nonatomic) BOOL useAudioEffect;
@property (nonatomic) BOOL shouldPassthroughAudio;
@property (nonatomic) BOOL shouldInvalidateAudioSampleWhenDone;
@property (nonatomic) NSInteger controlFrameRate;
@property (nonatomic) @? completionBlock;
@property (nonatomic) @? failureBlock;
@property (nonatomic) @? dropframeCallback;
@property (nonatomic) <IESGLMovieWriterDelegate> delegate;
@property (nonatomic) BOOL encodingLiveVideo;
@property (nonatomic) @? videoInputReadyCallback;
@property (nonatomic) @? audioInputReadyCallback;
@property (nonatomic) @? audioProcessingCallback;
@property (nonatomic) @? videoProcessingCallback;
@property (nonatomic) BOOL enabled;
@property (nonatomic) {?=qiIq} duration;
@property (nonatomic) {CGAffineTransform=dddddd} transform;
@property (nonatomic) NSArray metaData;
@property (nonatomic) BOOL paused;
@property (nonatomic) HTSGLContext movieWriterContext;
@property (nonatomic) double recordRate;
@property (nonatomic) double captureFrameRate;
@property (nonatomic) double effectRecordRate;
@property (nonatomic) BOOL useEffectRecordRate;
@property (nonatomic) {?=qiIq} maxLimitTime;
@property (nonatomic) BOOL disableWriteAuido;
@property (nonatomic) BOOL isBytevc;
@property (nonatomic) @? getVideoUrl;
@property (nonatomic) Q inputRotation;
@property (nonatomic) q rendererType;
@property (nonatomic) double startWritingTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setGetVideoUrl:;
- (void)setHasAudioTrack:audioSettings:;
- (void)setLimitLogger:;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (BOOL)abHdrEffectOptimization;
- (BOOL)abRecordLagCountOpt;
- (BOOL)abRecordOptimization;
- (void)appendPixelBufferAttachment:;
- (id)audioInputReadyCallback;
- (id)audioProcessingCallback;
- (void)checkReachedMaxLimitTime;
- (int)controlFrameRate;
- (void)delayStartRecording;
- (BOOL)disableWriteAuido;
- (id)dropframeCallback;
- (double)effectRecordRate;
- (void)enableSynchronizationCallbacks;
- (BOOL)encodeFrameAsHlg;
- (id)encodePixelBuf;
- (BOOL)encodingLiveVideo;
- (void)endProcessing;
- (void)finishRecordingWithCompletionHandler:;
- (double)fristAudioTime;
- (double)fristVideoTime;
- (double)getProgress;
- (double)getSuitableSampleRate:;
- (id)getVideoUrl;
- (id)hdrEffectOptFilter;
- (id)initWithMovieURL:size:;
- (id)initWithMovieURL:size:fileType:videoSettings:audioSettings:encodeFrameAsHlg:;
- (id)initWithMovieURL:size:fileType:videoSettings:audioSettings:encodeFrameAsHlg:isMultiEncoder:context:;
- (void)initializeMovieWithOutputSettings:;
- (BOOL)isAudioReady;
- (BOOL)isBytevc;
- (BOOL)isFristAudioFrame;
- (BOOL)isFristVideoFrame;
- (BOOL)isFromRecorder;
- (BOOL)isMultiEncoder;
- (BOOL)isPassThrough;
- (BOOL)isVideoReady;
- (id)limitLogger;
- (id)maxLimitTime;
- (id)maximumOutputSize;
- (id)movieWriterContext;
- (BOOL)needStatisticProgress;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (long long)nextAvailableTextureIndex;
- (void)p_resetAssetWriter;
- (BOOL)p_startWritingWithRetry;
- (void)p_trackWriterStartCode:;
- (id)pixelBufferCopyUtils;
- (void)preloadAssetWriter;
- (void)processAudioBuffer:;
- (void)processAudioBuffer:successAudioCallback:;
- (void)processVideoBuffer:;
- (double)progressCurrentTime;
- (double)progressStartTime;
- (double)progressTotalTime;
- (double)recordRate;
- (void)releaseWriter;
- (void)setAbHdrEffectOptimization:;
- (void)setAbRecordLagCountOpt:;
- (void)setAbRecordOptimization:;
- (void)setAudioInputReadyCallback:;
- (void)setAudioProcessingCallback:;
- (void)setControlFrameRate:;
- (void)setDisableWriteAuido:;
- (void)setDropFrame:;
- (void)setDropframeCallback:;
- (void)setEffectPassThrough:;
- (void)setEffectRecordRate:;
- (void)setEncodeFrameAsHlg:;
- (void)setEncodePixelBuf:;
- (void)setEncodingLiveVideo:;
- (void)setFristAudioTime:;
- (void)setFristVideoTime:;
- (void)setHdrEffectOptFilter:;
- (void)setInputFramebuffer:atIndex:;
- (void)setInputRotation:atIndex:;
- (void)setInputSize:atIndex:;
- (void)setIsAudioReady:;
- (void)setIsBytevc:;
- (void)setIsFristAudioFrame:;
- (void)setIsFristVideoFrame:;
- (void)setIsFromRecorder:;
- (void)setIsMultiEncoder:;
- (void)setIsPassThrough:;
- (void)setIsVideoReady:;
- (void)setMaxLimitTime:;
- (void)setMovieWriterContext:;
- (void)setNeedStatisticProgress:;
- (void)setPixelBufferCopyUtils:;
- (void)setProgressCurrentTime:;
- (void)setProgressStartTime:;
- (void)setProgressTotalTime:;
- (void)setRecordRate:;
- (void)setShouldInvalidateAudioSampleWhenDone:;
- (void)setShouldPassthroughAudio:;
- (void)setStartWritingTime:;
- (void)setUseAudioEffect:;
- (void)setUseEffectRecordRate:;
- (void)setVideoInputReadyCallback:;
- (void)setVideoProcessingCallback:;
- (BOOL)shouldInvalidateAudioSampleWhenDone;
- (BOOL)shouldPassthroughAudio;
- (void)startRecordingInOrientation:;
- (double)startWritingTime;
- (BOOL)useAudioEffect;
- (BOOL)useEffectRecordRate;
- (id)videoInputReadyCallback;
- (id)videoProcessingCallback;
- (BOOL)wantsMonochromeInput;
- (BOOL)paused;
- (void)setMetaData:;
- (void)dealloc;
- (void)setRoute:;
- (BOOL)hasAudioTrack;
- (id)context;
- (BOOL)enabled;
- (id)route;
- (void)setTransform:;
- (void)setDelegate:;
- (void)setCompletionBlock:;
- (id)error;
- (id)failureBlock;
- (void)setFailureBlock:;
- (void)setPaused:;
- (void)setDuration:;
- (id)metaData;
- (id)transform;
- (id)outputURL;
- (id)delegate;
- (void)startRecording;
- (void)setEnabled:;
- (void).cxx_destruct;
- (long long)status;
- (id)completionBlock;
- (void)setContext:;
- (id)duration;
- (void)setAudioSettings:;
- (id)audioSettings;
- (void)cancelRecording;
- (void)setVideoSettings:;
- (unsigned long long)inputRotation;
- (void)setInputRotation:;
- (id)videoSettings;
- (id)assetWriter;
- (void)setHasAudioTrack:;
- (long long)rendererType;
- (void)finishRecording;
- (double)captureFrameRate;
- (void)setCaptureFrameRate:;
- (void)setRendererType:;
@end

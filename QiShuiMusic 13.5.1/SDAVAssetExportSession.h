@interface SDAVAssetExportSession : NSObject
@property (nonatomic) float progress;
@property (nonatomic) AVAssetReader reader;
@property (nonatomic) AVAssetReaderVideoCompositionOutput videoOutput;
@property (nonatomic) AVAssetReaderAudioMixOutput audioOutput;
@property (nonatomic) AVAssetWriter writer;
@property (nonatomic) AVAssetWriterInput videoInput;
@property (nonatomic) AVAssetWriterInputPixelBufferAdaptor videoPixelBufferAdaptor;
@property (nonatomic) AVAssetWriterInput audioInput;
@property (nonatomic) NSObject<OS_dispatch_queue> inputQueue;
@property (nonatomic) @? completionHandler;
@property (nonatomic) <SDAVAssetExportSessionDelegate> delegate;
@property (nonatomic) AVAsset asset;
@property (nonatomic) AVVideoComposition videoComposition;
@property (nonatomic) AVAudioMix audioMix;
@property (nonatomic) NSString outputFileType;
@property (nonatomic) NSURL outputURL;
@property (nonatomic) NSDictionary videoInputSettings;
@property (nonatomic) NSDictionary videoSettings;
@property (nonatomic) NSDictionary audioSettings;
@property (nonatomic) BOOL ignoreAudios;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (nonatomic) NSArray metadata;
@property (nonatomic) NSError error;
@property (nonatomic) q status;
- (void)setAudioOutput:;
- (id)buildDefaultVideoComposition;
- (BOOL)encodeReadySamplesFromOutput:toInput:;
- (BOOL)ignoreAudios;
- (void)setIgnoreAudios:;
- (void)setInputQueue:;
- (void)setVideoInputSettings:;
- (void)setVideoPixelBufferAdaptor:;
- (id)videoInputSettings;
- (id)videoPixelBufferAdaptor;
- (id)initWithAsset:;
- (void)complete;
- (id)timeRange;
- (id)videoOutput;
- (void)setAudioMix:;
- (void)setShouldOptimizeForNetworkUse:;
- (id)asset;
- (void)setVideoOutput:;
- (void)setDelegate:;
- (void)setProgress:;
- (id)metadata;
- (void)finish;
- (void)setCompletionHandler:;
- (void)setOutputFileType:;
- (id)error;
- (void)setTimeRange:;
- (id)outputFileType;
- (void)setMetadata:;
- (void)setOutputURL:;
- (float)progress;
- (id)audioMix;
- (id)outputURL;
- (void)setWriter:;
- (BOOL)shouldOptimizeForNetworkUse;
- (id)delegate;
- (void).cxx_destruct;
- (void)reset;
- (id)writer;
- (long long)status;
- (id)reader;
- (id)audioOutput;
- (void)setAudioSettings:;
- (id)audioSettings;
- (id)completionHandler;
- (id)audioInput;
- (void)setAudioInput:;
- (void)setVideoSettings:;
- (id)videoComposition;
- (void)setVideoComposition:;
- (id)videoSettings;
- (void)exportAsynchronouslyWithCompletionHandler:;
- (void)cancelExport;
- (id)videoInput;
- (void)setVideoInput:;
- (void)setReader:;
- (id)inputQueue;
+ (id)exportSessionWithAsset:;
@end

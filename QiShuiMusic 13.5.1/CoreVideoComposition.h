@interface CoreVideoComposition : NSObject
@property (nonatomic) @? progress;
@property (nonatomic) @? completion;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (void)_addAudio;
- (void)_completeWithExportURL:;
- (id)_errorMessage:;
- (void)addAudio;
- (void)appendLayer:;
- (void)appendPixelBuffer:;
- (id)initWithFPS:maxFrameCount:videoSize:audioMedia:audioStartTime:progress:completionHandler:;
- (id)completion;
- (void)setCompletion:;
- (void)_save;
- (void)cancel;
- (void)save;
- (void)setProgress:;
- (id)progress;
- (void).cxx_destruct;
- (void)_completeWithError:;
- (id)queue;
+ (id)imageFromLayer:;
+ (id)pixelBufferFromLayer:;
@end

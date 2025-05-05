@interface VCVideoCapture : NSObject
@property (nonatomic) NSArray sinkArray;
@property (nonatomic) I sinkCount;
@property (nonatomic) NSObject<VCVideoCaptureServer> captureServer;
- (void)dealloc;
- (id)initWithCaptureServer:;
- (unsigned int)addSink:;
- (unsigned int)removeSink:;
- (id)captureServer;
- (unsigned int)sinkCount;
- (void)distributeVideoFrame:frameTime:preview:orientation:fromCamera:camera:switching:videoMirrored:;
- (id)sinkArray;
@end

@interface IESLiveCameraCapturer : NSObject
@property (nonatomic) <IESLiveRecoder> camera;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPixelBufferProcessBlock:;
- (void)setVideoProcessedCallback:;
- (id)camera;
- (void)stopCapture;
- (void)setCamera:;
- (void).cxx_destruct;
- (void)startCapture;
- (id)initWithCamera:;
@end

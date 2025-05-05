@interface PHLivePhotoEditingContext : NSObject
@property (nonatomic) CIImage fullSizeImage;
@property (nonatomic) {?=qiIq} duration;
@property (nonatomic) {?=qiIq} photoTime;
@property (nonatomic) @? frameProcessor;
@property (nonatomic) float audioVolume;
@property (nonatomic) I orientation;
- (id)init;
- (void)cancel;
- (float)audioVolume;
- (unsigned int)orientation;
- (void).cxx_destruct;
- (void)setAudioVolume:;
- (id)duration;
- (id)fullSizeImage;
- (id)photoTime;
- (id)initWithLivePhotoEditingInput:;
- (id)frameProcessor;
- (void)setFrameProcessor:;
- (void)prepareLivePhotoForPlaybackWithTargetSize:options:completionHandler:;
- (void)saveLivePhotoToOutput:options:completionHandler:;
+ (id)errorWithUnderlyingError:;
@end

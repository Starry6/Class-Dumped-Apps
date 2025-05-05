@interface VEVideoFramesGenerator : NSObject
@property (nonatomic) AVAssetImageGenerator generator;
@property (nonatomic) @? callback;
@property (nonatomic) @? frameCallback;
@property (nonatomic) q index;
@property (nonatomic) q total;
@property (nonatomic) BOOL cancelGenerateFrames;
- (id)caculateFramesTimesInRange:andInterval:;
- (double)caculateInterval:;
- (BOOL)cancelGenerateFrames;
- (id)frameCallback;
- (void)generateFile:range:customInterval:size:imageCallback:completion:;
- (void)generateFile:range:fps:size:imageCallback:completion:;
- (void)generateImageWithFile:range:customInterval:size:imageCallback:completion:;
- (long long)orientationForVideoImage:;
- (void)setCancelGenerateFrames:;
- (void)setFrameCallback:;
- (id)callback;
- (void)setCallback:;
- (id)init;
- (void)cancel;
- (id)generator;
- (long long)index;
- (void)setIndex:;
- (void).cxx_destruct;
- (long long)total;
- (void)setGenerator:;
- (void)setTotal:;
@end

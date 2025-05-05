@interface ByteRTCFaceDetectionResult : NSObject
@property (nonatomic) NSInteger detectResult;
@property (nonatomic) NSInteger imageWidth;
@property (nonatomic) NSInteger imageHeight;
@property (nonatomic) NSArray faces;
@property (nonatomic) {?=qiIq} frameTimestamp;
- (void)setFrameTimestamp:;
- (int)detectResult;
- (void)setDetectResult:;
- (id)faces;
- (void).cxx_destruct;
- (void)setFaces:;
- (int)imageWidth;
- (int)imageHeight;
- (id)frameTimestamp;
- (void)setImageHeight:;
- (void)setImageWidth:;
@end

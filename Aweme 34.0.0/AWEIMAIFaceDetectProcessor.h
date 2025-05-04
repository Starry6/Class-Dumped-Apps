@interface AWEIMAIFaceDetectProcessor : NSObject
@property (nonatomic) VEAlgorithmSession algorithmSession;
- (id)algorithmSession;
- (void)setAlgorithmSession:;
- (BOOL)checkFaceImageForMixPhoto:;
- (void)runAlgorithmImagePath:effectModelFilePath:completion:;
- (void).cxx_destruct;
@end

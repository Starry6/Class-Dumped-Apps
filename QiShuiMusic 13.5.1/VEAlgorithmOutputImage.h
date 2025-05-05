@interface VEAlgorithmOutputImage : NSObject
@property (nonatomic) VEAlgorithmOutputImageC3Feature c3Out;
@property (nonatomic) VEAlgorithmOutputImagePorn pornOut;
@property (nonatomic) VEAlgorithmOUtputImageFaceClustering faceClusterOut;
- (id)pornOut;
- (id)c3Out;
- (id)faceClusterOut;
- (void)setC3Out:;
- (void)setFaceClusterOut:;
- (void)setPornOut:;
- (void).cxx_destruct;
@end

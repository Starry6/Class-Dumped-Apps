@interface EspressoFaceLandmarkDetector : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} newface;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)extractSubLandmarksFromCrop192:centers192:;
- (id)detect:face:sublandmark:doFaceRectFix:;
- (id)detectInImageRect:face:sublandmark:;
- (id)initWithNetworkAtPath:context:platform:computePath:;
- (id)initWithNetworkAtPath:contextObjC:platform:computePath:;
- (void)commonInit:context:platform:computePath:;
- (id)newface;
- (void)setNewface:;
@end

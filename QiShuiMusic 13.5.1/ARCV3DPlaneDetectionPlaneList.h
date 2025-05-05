@interface ARCV3DPlaneDetectionPlaneList : NSObject
@property (nonatomic) r^{CV3DPlaneDetectionPlaneList=} cv3dPlaneDetections;
- (void)dealloc;
- (id)initWithDetectionResult:;
- (unsigned long long)numberOfPlanes;
- (id)planeAtIndex:;
- (id)cv3dPlaneDetections;
@end

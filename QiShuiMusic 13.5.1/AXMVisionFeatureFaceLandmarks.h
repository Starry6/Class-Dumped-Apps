@interface AXMVisionFeatureFaceLandmarks : NSObject
@property (nonatomic) BOOL is3DLandmarks;
@property (nonatomic) NSDictionary results;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)results;
- (void).cxx_destruct;
- (void)setResults:;
- (id)initWithVisionFaceLandmarks:;
- (id)pointsArrayForRegion:;
- (id)pointValuesForFaceLandmarkType:;
- (id)localizedStringForLandmarkType:;
- (BOOL)is3DLandmarks;
- (void)setIs3DLandmarks:;
+ (BOOL)supportsSecureCoding;
+ (id)unitTestingFaceLandmarksIs3D:;
@end

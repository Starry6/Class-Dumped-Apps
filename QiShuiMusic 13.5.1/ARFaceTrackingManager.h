@interface ARFaceTrackingManager : NSObject
@property (nonatomic) q maximumNumberOfTrackedFaces;
- (id)init;
- (void)dealloc;
- (id)initWithOptions:;
- (id)processData:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithMaximumNumberOfTrackedFaces:options:;
- (long long)maximumNumberOfTrackedFaces;
- (id)faceTrackingOptionsFromImageData:withCallback:;
+ (BOOL)isSupported;
@end

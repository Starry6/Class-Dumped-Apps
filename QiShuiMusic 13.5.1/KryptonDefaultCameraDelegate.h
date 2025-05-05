@interface KryptonDefaultCameraDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cameraDidOutputPixelBuffer:presentationTimeStamp:;
- (void)setCameraContext:;
@end

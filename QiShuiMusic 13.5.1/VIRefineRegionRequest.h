@interface VIRefineRegionRequest : NSObject
@property (nonatomic) <VIImageContent> image;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} regionOfInterest;
@property (nonatomic) q imageType;
@property (nonatomic) <MTLDevice> preferredMetalDevice;
- (long long)imageType;
- (void).cxx_destruct;
- (id)image;
- (id)preferredMetalDevice;
- (id)regionOfInterest;
- (id)initWithImage:regionOfInterest:imageType:preferredMetalDevice:;
@end

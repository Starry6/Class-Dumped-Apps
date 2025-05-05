@interface GEOStorefrontCamera : NSObject
@property (nonatomic) NSInteger cameraNumber;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) {GEOOrientedPosition={?=ddd}fff} position;
@property (nonatomic) C lensType;
@property (nonatomic) {GEOLensModel=fffffffff} projection;
@property (nonatomic) NSArray textureIds;
- (id)position;
- (id)init;
- (id)imageSize;
- (void).cxx_destruct;
- (int)cameraNumber;
- (id)initWithCameraMetadata:;
- (unsigned char)lensType;
- (id)projection;
- (id)textureIds;
@end

@interface CVAPortraitRequest_StageLight : NSObject
@property (nonatomic) CVAMattingRequest mattingRequest;
@property (nonatomic) ^{__CVBuffer=} destinationColorPixelBuffer;
@property (nonatomic) NSData proxyCubeData;
@property (nonatomic) NSData cubeData;
@property (nonatomic) float vignetteIntensity;
@property (nonatomic) float stageLightIntensity;
@property (nonatomic) <CVAPortraitGenericRequest> parentGenericRequestFrom;
@property (nonatomic) <CVAPortraitGenericRequest> parentGenericRequestTo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (id)cubeData;
- (id)mattingRequest;
- (id)destinationColorPixelBuffer;
- (id)parentGenericRequestFrom;
- (void)setParentGenericRequestFrom:;
- (id)parentGenericRequestTo;
- (void)setParentGenericRequestTo:;
- (id)initWithMattingRequest:destinationColorPixelBuffer:proxyCubeData:cubeData:vignetteIntensity:stageLightIntensity:;
- (id)proxyCubeData;
- (float)vignetteIntensity;
- (float)stageLightIntensity;
@end

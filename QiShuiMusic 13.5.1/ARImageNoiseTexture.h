@interface ARImageNoiseTexture : NSObject
@property (nonatomic) <MTLTexture> texture;
- (id)texture;
- (void).cxx_destruct;
- (id)initWithNoiseModel:;
- (float)snrToNoiseIntensity:;
+ (id)sharedInstanceForCameraPosition:longEdgeImageResolution:;
@end

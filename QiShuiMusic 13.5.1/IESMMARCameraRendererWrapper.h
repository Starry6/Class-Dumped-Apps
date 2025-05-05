@interface IESMMARCameraRendererWrapper : NSObject
@property (nonatomic) HTSGLFilterGroup<IESMMEffectGroupProtocol> effectFilter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)arCamera:ambientLightEstimatedIntensity:colorTemperature:;
- (void)arCamera:environmentCubeUpdateWithName:data:size:;
- (id)effectFilter;
- (void)setEffectFilter:;
- (void).cxx_destruct;
@end

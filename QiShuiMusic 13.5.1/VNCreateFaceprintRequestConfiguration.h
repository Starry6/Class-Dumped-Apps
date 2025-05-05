@interface VNCreateFaceprintRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) BOOL forceFaceprintCreation;
- (BOOL)forceFaceprintCreation;
- (id)initWithRequestClass:;
- (void)setForceFaceprintCreation:;
- (id)copyWithZone:;
@end

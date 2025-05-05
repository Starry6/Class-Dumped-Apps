@interface MIOMutableModelDescription : MIOModelDescription
@property (nonatomic) NSDictionary metadata;
- (id)copyWithZone:;
- (void)setShortDescription:forInputFeatureWithName:;
- (void)setShortDescription:forOutputFeatureWithName:;
- (void)setShortDescription:forTrainingInputFeatureWithName:;
@end

@interface VNCreateSmartCamprintRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) BOOL returnAllResults;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (BOOL)returnAllResults;
- (void)setReturnAllResults:;
@end

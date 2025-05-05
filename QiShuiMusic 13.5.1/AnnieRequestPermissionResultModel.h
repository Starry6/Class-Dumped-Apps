@interface AnnieRequestPermissionResultModel : IESLiveBridgeModel
@property (nonatomic) q status;
- (BOOL)modelCustomTransformToDictionary:;
- (void)setStatus:;
- (long long)status;
@end

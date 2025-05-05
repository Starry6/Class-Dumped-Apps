@interface AnnieRequestPermissionParamModel : IESLiveBridgeModel
@property (nonatomic) q permission;
- (BOOL)modelCustomTransformFromDictionary:;
- (long long)permission;
- (void)setPermission:;
@end

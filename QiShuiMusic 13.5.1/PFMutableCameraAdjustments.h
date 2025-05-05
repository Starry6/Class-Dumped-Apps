@interface PFMutableCameraAdjustments : PFCameraAdjustments
@property (nonatomic) NSString effectFilterName;
@property (nonatomic) NSString portraitEffectFilterName;
@property (nonatomic) AVApplePortraitMetadata portraitMetadata;
@property (nonatomic) BOOL depthEnabled;
@property (nonatomic) Q cinematicVideoRenderingVersion;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
- (void)setCropRect:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setDepthEnabled:;
- (void)setPortraitEffectFilterName:;
- (void)setPortraitMetadata:;
- (void)setEffectFilterName:;
- (void)setCinematicVideoRenderingVersion:;
@end

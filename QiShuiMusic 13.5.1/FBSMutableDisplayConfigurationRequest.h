@interface FBSMutableDisplayConfigurationRequest : FBSDisplayConfigurationRequest
@property (nonatomic) q overscanCompensation;
@property (nonatomic) {CGSize=dd} nativePixelSize;
@property (nonatomic) double refreshRate;
@property (nonatomic) q hdrMode;
- (void)setHdrMode:;
- (id)copyWithZone:;
- (void)setRefreshRate:;
- (void)setNativePixelSize:;
- (void)setOverscanCompensation:;
@end

@interface SBSMutableDisplayModeSettings : SBSDisplayModeSettings
@property (nonatomic) Q scale;
@property (nonatomic) q overscanCompensation;
- (void)setScale:;
- (id)copyWithZone:;
- (void)setOverscanCompensation:;
@end

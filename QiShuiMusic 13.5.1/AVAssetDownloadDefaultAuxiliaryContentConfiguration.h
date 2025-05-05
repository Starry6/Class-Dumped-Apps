@interface AVAssetDownloadDefaultAuxiliaryContentConfiguration : AVAssetDownloadContentConfiguration
- (void)_serializeIntoDownloadConfig:asset:;
- (void)_setupContentConfigWithDownloadConfig:asset:;
+ (BOOL)supportsSecureCoding;
@end

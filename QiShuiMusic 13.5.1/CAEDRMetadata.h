@interface CAEDRMetadata : NSObject
- (void)dealloc;
- (id)description;
- (id)initWithSEIMasteringDisplayData:contentLightLevelData:;
- (id)initWithSEIMasteringDisplayData:contentLightLevelData:opticalOutputScale:;
- (id)initWithMasteringDisplayMinNits:maxNits:opticalOutputScale:;
- (id)initWithBT2100HLG;
+ (BOOL)isAvailable;
+ (id)HDR10MetadataWithDisplayInfo:contentInfo:opticalOutputScale:;
+ (id)HDR10MetadataWithMinLuminance:maxLuminance:opticalOutputScale:;
+ (id)HLGMetadata;
+ (void)setMetadata:onSurface:;
@end

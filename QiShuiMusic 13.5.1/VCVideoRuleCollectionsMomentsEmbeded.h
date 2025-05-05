@interface VCVideoRuleCollectionsMomentsEmbeded : VCVideoRuleCollectionsMoments
- (id)initWithHardwareSettings:;
- (unsigned char)getMomentsCapabilities;
- (id)getMomentsImageTypes;
- (id)getMomentsVideoCodecs;
- (BOOL)isSupportedDeviceClass;
- (BOOL)isSupportedChipID;
+ (id)sharedInstance;
@end

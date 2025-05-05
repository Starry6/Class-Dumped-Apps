@interface VCAudioTierPicker : NSObject
@property (nonatomic) {?=i^{__CFArray}^{__CFArray}^{__CFArray}IBBIBBB} config;
@property (nonatomic) VCAudioTier defaultTier;
- (void)dealloc;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (BOOL)reconfigureTierPicker:;
- (id)configToString:;
- (void)logTierPickerConfig:;
- (BOOL)setupTierPickerForConfig:;
- (void)setupAlwaysOnRedTiersForSupportedRed:usingCellular:;
- (void)printCreatedAudioTiers:;
- (id)tierForNetworkBitrate:withLegacyDuplication:;
- (id)tierForNetworkBitrate:withRedNumPayloads:;
- (id)allAudioTiers;
- (id)defaultTier;
+ (int)tierPickerModeToAVConferenceOperatingMode:;
+ (int)operatingModeToTierPickerMode:;
+ (BOOL)arrayHasObject:withPayloadType:;
+ (id)allPossibleCombinations:supportedPacketsPerBundle:redNumPayloads:headerSize:tierPickerMode:usingCellular:useCaseWatchContinuity:;
+ (id)selectHighestQualityAudioTiers:forBitrateLimits:isHardLimit:;
+ (BOOL)shouldFilterTierForPayloadConfig:bitRate:packetsPerBundle:mode:redNumPayloads:cellular:;
+ (id)valueForNetworkBitrate:networkBitrate:;
@end

@interface TLAlertConfiguration : NSObject
@property (nonatomic) BOOL _hasCustomAudioVolume;
@property (nonatomic) double _audioPlaybackInitiationDelay;
@property (nonatomic) double _audioVolumeRampingDuration;
@property (nonatomic) q type;
@property (nonatomic) NSString topic;
@property (nonatomic) NSString toneIdentifier;
@property (nonatomic) NSString vibrationIdentifier;
@property (nonatomic) NSURL externalToneFileURL;
@property (nonatomic) Q externalToneMediaLibraryItemIdentifier;
@property (nonatomic) NSDictionary externalVibrationPattern;
@property (nonatomic) NSURL externalVibrationPatternFileURL;
@property (nonatomic) NSString audioCategory;
@property (nonatomic) float audioVolume;
@property (nonatomic) BOOL forPreview;
@property (nonatomic) double maximumDuration;
@property (nonatomic) BOOL shouldRepeat;
@property (nonatomic) BOOL shouldIgnoreRingerSwitch;
@property (nonatomic) BOOL shouldForcePlayingAtUserSelectedAudioVolume;
@property (nonatomic) BOOL shouldIgnoreAccessibilityDisabledVibrationSetting;
- (void)setAudioCategory:;
- (void)setTopic:;
- (id)vibrationIdentifier;
- (float)audioVolume;
- (id)audioCategory;
- (void)setShouldIgnoreAccessibilityDisabledVibrationSetting:;
- (BOOL)shouldIgnoreAccessibilityDisabledVibrationSetting;
- (BOOL)shouldIgnoreRingerSwitch;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setToneIdentifier:;
- (void)encodeWithCoder:;
- (long long)type;
- (double)maximumDuration;
- (void)setVibrationIdentifier:;
- (id)toneIdentifier;
- (void).cxx_destruct;
- (void)setAudioVolume:;
- (id)description;
- (id)topic;
- (void)setMaximumDuration:;
- (void)setShouldIgnoreRingerSwitch:;
- (BOOL)isForPreview;
- (BOOL)isEqual:;
- (id)initWithType:;
- (id)copyWithZone:;
- (void)setShouldRepeat:;
- (BOOL)shouldRepeat;
- (void)setForPreview:;
- (void)_freeze;
- (void)setExternalToneFileURL:;
- (void)setExternalVibrationPattern:;
- (void)_throwForFrozenInstance;
- (void)setExternalToneMediaLibraryItemIdentifier:;
- (void)setExternalVibrationPatternFileURL:;
- (void)setShouldForcePlayingAtUserSelectedAudioVolume:;
- (void)_setAudioPlaybackInitiationDelay:;
- (void)_setAudioVolumeRampingDuration:;
- (BOOL)_hasCustomAudioVolume;
- (double)_audioPlaybackInitiationDelay;
- (double)_audioVolumeRampingDuration;
- (id)externalToneFileURL;
- (unsigned long long)externalToneMediaLibraryItemIdentifier;
- (id)externalVibrationPattern;
- (id)externalVibrationPatternFileURL;
- (BOOL)shouldForcePlayingAtUserSelectedAudioVolume;
+ (BOOL)supportsSecureCoding;
@end

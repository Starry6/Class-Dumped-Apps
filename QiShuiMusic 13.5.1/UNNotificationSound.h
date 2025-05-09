@interface UNNotificationSound : NSObject
@property (nonatomic) q alertType;
@property (nonatomic) NSString alertTopic;
@property (nonatomic) NSString audioCategory;
@property (nonatomic) NSNumber audioVolume;
@property (nonatomic) BOOL critical;
@property (nonatomic) double maximumDuration;
@property (nonatomic) BOOL shouldIgnoreAccessibilityDisabledVibrationSetting;
@property (nonatomic) BOOL shouldIgnoreRingerSwitch;
@property (nonatomic) BOOL shouldRepeat;
@property (nonatomic) NSString toneFileName;
@property (nonatomic) NSURL toneFileURL;
@property (nonatomic) NSString toneIdentifier;
@property (nonatomic) Q toneMediaLibraryItemIdentifier;
@property (nonatomic) NSString vibrationIdentifier;
@property (nonatomic) NSURL vibrationPatternFileURL;
- (id)vibrationPatternFileURL;
- (id)init;
- (id)vibrationIdentifier;
- (id)audioVolume;
- (id)audioCategory;
- (BOOL)shouldIgnoreAccessibilityDisabledVibrationSetting;
- (BOOL)shouldIgnoreRingerSwitch;
- (BOOL)isCritical;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)toneFileName;
- (void)encodeWithCoder:;
- (id)toneFileURL;
- (double)maximumDuration;
- (long long)alertType;
- (id)toneIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (unsigned long long)toneMediaLibraryItemIdentifier;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)shouldRepeat;
- (id)alertTopic;
- (id)_initWithAlertType:alertTopic:audioCategory:audioVolume:critical:maximumDuration:shouldIgnoreAccessibilityDisabledVibrationSetting:shouldIgnoreRingerSwitch:shouldRepeat:toneFileName:toneFileURL:toneIdentifier:toneMediaLibraryItemIdentifier:vibrationIdentifier:vibrationPatternFileURL:;
+ (BOOL)supportsSecureCoding;
+ (id)soundWithAlertType:;
+ (id)defaultSound;
+ (id)defaultSystemSound;
+ (id)defaultRingtoneSound;
+ (id)defaultCriticalSound;
+ (id)defaultCriticalSoundWithAudioVolume:;
+ (id)criticalSoundNamed:;
+ (id)criticalSoundNamed:withAudioVolume:;
+ (id)soundNamed:;
+ (id)ringtoneSoundNamed:;
+ (id)_soundWithAlertType:audioVolume:critical:toneFileName:;
@end

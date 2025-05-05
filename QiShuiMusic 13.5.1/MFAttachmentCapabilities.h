@interface MFAttachmentCapabilities : NSObject
+ (unsigned long long)currentMessageLimit;
+ (unsigned long long)currentDownloadLimit;
+ (unsigned long long)currentUploadLimit;
+ (unsigned long long)currentUploadLimitForAccount:;
+ (BOOL)_isMailDropDevice;
+ (unsigned long long)mailDropThreshold;
+ (unsigned long long)_mailDropLimit;
+ (BOOL)mailDropConfigured;
+ (BOOL)mailDropAvailableForAccount:;
+ (BOOL)mailDropAvailable;
+ (double)mailDropExpiration;
+ (id)mailDropPreferences;
+ (unsigned long long)currentPlaceholderThreshold;
+ (BOOL)placeholdersAvailable;
+ (id)capabilitiesDictionary;
@end

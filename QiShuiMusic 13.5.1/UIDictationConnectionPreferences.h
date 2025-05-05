@interface UIDictationConnectionPreferences : NSObject
@property (nonatomic) AFPreferences afPreferences;
- (id)afPreferences;
- (id)languageCode;
- (BOOL)isOnDeviceDictationSupportAvailableForLanguage:;
- (void)setAfPreferences:;
- (id)manualEndpointingThreshold;
- (id)initSingleton;
- (BOOL)suppressDictationOptIn;
- (BOOL)dictationIsEnabled;
- (BOOL)ignoreServerManualEndpointingThreshold;
- (id)getOfflineDictationStatusForLanguage:;
- (void).cxx_destruct;
- (long long)dataSharingOptInStatus;
- (BOOL)isOnDeviceEmojiRecognitionSupportAvailableForLanguage:;
- (id)dictationSLSEnabledLanguages;
- (BOOL)suppressDataSharingOptIn;
- (void)afPreferencesChanged:;
- (BOOL)isSmartLanguageSelectionEnabled;
+ (id)sharedInstance;
@end

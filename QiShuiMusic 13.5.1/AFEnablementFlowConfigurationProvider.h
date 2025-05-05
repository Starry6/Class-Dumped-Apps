@interface AFEnablementFlowConfigurationProvider : NSObject
@property (nonatomic) AFSettingsConnection settingsConnection;
- (id)init;
- (id)settingsConnection;
- (void)setSettingsConnection:;
- (void).cxx_destruct;
- (void)configurationForEnablementFlow:recognitionLanguageCodes:completion:;
- (void)_resolveIfNewUserWithParameters:forRecognitionLanguages:completion:;
- (void)_resolveVoiceSelection:forRecognitionLanguages:completion:;
- (id)_storedRecognitionLanguageCode;
- (id)_storedVoiceInfo;
+ (id)_createConfigurationForParameters:;
+ (void)_emitEnablementFlowLoggingForConfigurationParameters:didEnable:;
+ (BOOL)_shouldAllowRandomVoiceSelectionForEnablementFlow:;
@end

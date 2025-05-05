@interface WBSSafariSettingsSyncEngine : NSObject
- (id)init;
- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:;
- (void).cxx_destruct;
- (void)triggerImmediateBackgroundImageSaveIfApplicable;
- (BOOL)syncEnabled;
- (void)scheduleCloudBackgroundImageSaveWithURL:isLightAppearance:successCompletionHandler:;
- (void)registerDiagnosticInfo:;
- (void)saveSettingWithDictionaryRepresentation:successCompletionHandler:;
- (void)syncSettingsDownWithCompletion:;
- (void)syncSettingsUpWithCompletion:;
- (void)registerDiagnosticWithPayloadProvider:;
- (void)syncPerSiteSettingsDownWithCompletion:;
- (void)syncPerSiteSettingsUpWithCompletion:;
@end

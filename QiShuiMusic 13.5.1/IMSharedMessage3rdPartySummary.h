@interface IMSharedMessage3rdPartySummary : IMSharedMessageAppSummary
+ (id)pluginPath;
+ (id)previewSummaryWithPluginPayload:;
+ (id)_individualPreviewSummary:;
+ (id)_replaceHandleWithContactNameInString:;
+ (id)_displayNameWithID:;
+ (id)_handleIdentifiers:;
+ (id)_handleIdentifierRegex;
+ (id)_idForHandleIdentifier:;
+ (id)_appNameSummary:;
@end

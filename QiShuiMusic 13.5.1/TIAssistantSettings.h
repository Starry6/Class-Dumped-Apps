@interface TIAssistantSettings : NSObject
+ (void)promptToEnableDictationWithCompletionHandler:;
+ (void)launchPencilSettings;
+ (void)promptToEnableDataSharingWithCompletionHandler:;
+ (void)launchKeyboardSettings;
+ (void)setTestBlock:;
+ (void)presentDialogForType:withCompletionHandler:;
+ (void)dismissEnableDictationPrompt;
+ (void)promptToRemindDataSharingWithCompletionHandler:;
+ (void)connectForOperations:withErrorHandler:;
+ (void)promptReminderDataSharingWithCompletionHandler:;
+ (void)dismissDialog;
+ (void)dismissEnableDataSharingPrompt;
+ (void)dismissedDataSharingWithResponse:;
+ (void)launchDictationSettings;
@end

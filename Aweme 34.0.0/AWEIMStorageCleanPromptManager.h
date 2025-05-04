@interface AWEIMStorageCleanPromptManager : NSObject
+ (BOOL)shouldShowStorageCleanPromptPopupView;
+ (void)showStorageCleanPromptPopupView;
+ (void)_aweLazyRegisterLoadWhenDylibLoad;
+ (double)getFreeDiskSpace;
@end

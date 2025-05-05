@interface MSVSystemDialogManager : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)registerSystemDialog:forUserNotification:;
- (id)systemDialogForUserNotification:;
- (void)unregisterSystemDialogWithUserNotification:;
+ (id)sharedManager;
@end

@interface PLDistributedNotificationHandler : NSObject
- (void)registerForNotifications;
- (void)_handleCloudPhotoNotification;
- (void)_handleNotification:;
- (void).cxx_destruct;
- (void)_openSystemPhotoLibrary;
- (id)initWithLibraryBundleController:;
@end

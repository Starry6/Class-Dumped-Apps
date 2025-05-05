@interface PLPhotoLibraryForceExitObserver : NSObject
- (id)init;
- (void)dealloc;
- (void)_photoLibraryForceClientExitNotification;
- (void)_photoLibraryCorruptNotification;
+ (id)sharedInstance;
@end

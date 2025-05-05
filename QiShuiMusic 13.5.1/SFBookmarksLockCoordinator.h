@interface SFBookmarksLockCoordinator : NSObject
@property (nonatomic) BOOL hasBookmarksLock;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_willResignActive;
- (void)_didBecomeActive;
- (void)_unlockBookmarksNow;
- (BOOL)hasBookmarksLock;
- (BOOL)lockBookmarks;
- (void)unlockBookmarksSoon;
- (void)unlockBookmarksIfNeeded;
- (void)_clearBookmarkLockTimer;
+ (id)sharedCoordinator;
+ (void)showLockedDatabaseAlertForAction:fromViewController:;
@end

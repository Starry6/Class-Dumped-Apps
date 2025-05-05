@interface GEOKeyBagNotification : NSObject
@property (nonatomic) NSInteger state;
- (void)removeObserver:;
- (id)init;
- (void)dealloc;
- (BOOL)canAccessFilesWithProtection:;
- (void)updateState;
- (BOOL)addDataDidBecomeAvailableObserver:ifTypeIsNotCurrentlyAccessible:;
- (void)_statusChanged;
- (int)state;
+ (BOOL)canAccessFilesWithProtection:;
+ (id)sharedObject;
@end

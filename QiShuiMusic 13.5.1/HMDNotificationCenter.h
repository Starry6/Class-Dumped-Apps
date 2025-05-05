@interface HMDNotificationCenter : NSObject
- (void)asyncCleanUpInvalidConnection;
- (BOOL)removeConnectionForObserver:;
- (BOOL)removeConnectionForObserver:name:object:;
- (id)removeObserver:;
- (id)init;
- (id)removeObserver:name:object:;
- (void).cxx_destruct;
- (id)addObserver:selector:name:object:;
+ (id)sharedInstance;
@end

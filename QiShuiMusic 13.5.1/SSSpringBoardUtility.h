@interface SSSpringBoardUtility : NSObject
+ (id)_dispatchQueue;
+ (id)_applicationStateMonitor;
+ (BOOL)launchApplicationWithIdentifier:options:error:;
+ (void)wakeAppUsingRequest:;
+ (id)_dispatchQueueNotifications;
+ (id)_dispatchQueueSpringBoard;
+ (id)_getApplicationInfoForIdentifier:key:;
+ (BOOL)_getProcessID:forApplicationIdentifier:;
+ (void)_setApplicationState:forClientID:;
+ (id)_stateCache;
@end

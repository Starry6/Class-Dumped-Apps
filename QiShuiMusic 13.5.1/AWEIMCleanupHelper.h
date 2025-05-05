@interface AWEIMCleanupHelper : NSObject
- (void)handleApplicationDidEnterBackground:;
- (id)init;
- (BOOL)cleanup;
- (void)setup;
+ (id)sharedInstance;
@end

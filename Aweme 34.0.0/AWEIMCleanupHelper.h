@interface AWEIMCleanupHelper : NSObject
- (id)msgDBWalSize:;
- (double)dbWalSizeWithType:;
- (BOOL)cleanup;
- (void)setup;
+ (id)sharedInstance;
@end

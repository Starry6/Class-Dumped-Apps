@interface BYXPCActivityRegistrar : NSObject
- (void)registerActivityWithIdentifier:criteria:handler:;
- (void)unregisterActivityWithIdentifier:;
+ (id)sharedInstance;
@end

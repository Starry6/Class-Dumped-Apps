@interface IMSandboxingUtils : NSObject
- (id)logger;
+ (id)logger;
+ (BOOL)enterSandboxWithBundleIdentifier:;
@end

@interface LNConnectionPolicy : NSObject
+ (id)policyWithActionMetadata:;
+ (id)policyWithEntityMetadata:;
+ (id)policyWithEntityQueryMetadata:;
+ (id)policyWithBundleIdentifier:;
+ (id)policyWithActionMetadata:effectiveBundleIdentifier:appBundleIdentifier:;
+ (id)policyWithEntityMetadata:effectiveBundleIdentifier:appBundleIdentifier:;
+ (id)policyWithQueryMetadata:effectiveBundleIdentifier:appBundleIdentifier:;
+ (BOOL)shouldExecuteActionOnApplicationWithBundleIdentifier:;
@end

@interface AWEDeepLinkWorkflow : NSObject
- (id)aAWEDeepLinkWorkflowRegistrationCommonAdapter;
- (id)aAWEDeepLinkWorkflowDOUYINLiteAdapter;
- (id)aAWEDLTransferStepsLGAdapter;
+ (BOOL)canHandleDeepLink:sourceType:;
+ (BOOL)checkHTTP:;
+ (BOOL)checkWithSchemaConfig:sourceType:;
+ (id)referStringForType:;
+ (Class)aAWEDeepLinkWorkflowRegistrationCommonAdapterClass;
+ (void)registerPathsIfNeeded;
+ (BOOL)openDeepLink:linkSession:sourceType:prepareBlock:completion:;
+ (void)logHandleDeepLink:sourceType:;
+ (void)logCannotHandleDeepLink:;
+ (id)workflowFromURLString:sourceType:linkSession:;
+ (BOOL)enableRouteSafety;
+ (Class)aAWEDLTransferStepsLGAdapterClass;
+ (Class)aAWEDeepLinkWorkflowDOUYINLiteAdapterClass;
+ (void)startWorkflowForDomain:;
+ (BOOL)checkIsRealIronMan:;
+ (BOOL)checkSourceType:deeplink:;
+ (BOOL)openDeepLink:linkSession:sourceType:prepareBlock:;
+ (void)trackOpenUrlWithScheme:;
+ (id)preprocessSchemaFromDeepLink:;
+ (void)start;
@end

@interface SOErrorHelper : NSObject
+ (id)parameterErrorWithMessage:;
+ (id)errorWithCode:;
+ (id)invalidURLError:;
+ (id)errorWithCode:message:suberror:;
+ (BOOL)error:hasCode:subcode:;
+ (id)missingEntitlementError:;
+ (id)errorWithCode:message:;
+ (id)errorWithCode:message:moreInfo:;
+ (id)deniedBundleIdentifier:;
+ (id)doNotHandleBreakingRecursionWithCallerBundleIdentifier:;
+ (id)silentInternalErrorWithMessage:;
+ (id)errorNotSupported;
+ (BOOL)error:hasCode:;
+ (id)errorWithCode:userInfo:;
+ (id)internalErrorWithMessage:;
+ (id)errorWithCode:subcode:message:;
+ (void)raiseExceptionOnError:;
@end

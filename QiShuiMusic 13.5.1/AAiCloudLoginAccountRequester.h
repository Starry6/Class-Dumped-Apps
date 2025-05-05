@interface AAiCloudLoginAccountRequester : NSObject
- (void)loginWithAccount:forDelegates:completion:;
+ (id)delegateParamsForAllDelegates;
+ (id)delegateParamsForiCloudOnly;
@end

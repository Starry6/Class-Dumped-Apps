@interface AWEIMShareVideoTracker : NSObject
- (id)aAWELiteUGSocialModuleAdapter;
- (id)aAWEFeedShareObtainGoldDOUYINLiteAdapter;
- (id)aAWEUGKitModuleDOUYINAdapter;
+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (Class)aAWEFeedShareObtainGoldDOUYINLiteAdapterClass;
+ (void)trackShareMsgWithContext:text:shareList:;
+ (void)trackEvent:shareVSModel:params:shareList:;
+ (Class)aAWEUGKitModuleDOUYINAdapterClass;
+ (BOOL)shouldTrackShareMsgWithContext:;
+ (void)trackShareMsgSuccessWithContext:message:;
@end

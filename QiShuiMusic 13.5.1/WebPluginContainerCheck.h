@interface WebPluginContainerCheck : NSObject
- (void)cancel;
- (void)dealloc;
- (void)start;
- (id)contextInfo;
- (void)_continueWithPolicy:;
- (id)initWithRequest:target:resultObject:selector:controller:contextInfo:;
- (BOOL)_isForbiddenFileLoad;
- (id)_actionInformationWithURL:;
- (void)_askPolicyDelegate;
+ (id)checkWithRequest:target:resultObject:selector:controller:contextInfo:;
@end

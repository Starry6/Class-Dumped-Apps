@interface WebScriptCallFrame : NSObject
- (void)dealloc;
- (id)userInfo;
- (id)functionName;
- (id)exception;
- (void)setUserInfo:;
- (id)_initWithGlobalObject:functionName:exceptionValue:;
- (id)_convertValueToObjcValue:;
@end

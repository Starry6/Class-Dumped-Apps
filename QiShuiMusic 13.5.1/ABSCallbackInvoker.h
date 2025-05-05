@interface ABSCallbackInvoker : NSObject
- (void)invoke;
+ (void)invokeOnThread:callback:withAddressBook:context:;
@end

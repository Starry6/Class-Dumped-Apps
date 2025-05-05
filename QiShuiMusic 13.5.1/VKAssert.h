@interface VKAssert : NSObject
+ (void)handleFailedAssertWithCondition:functionName:simulateCrash:showAlert:format:;
+ (void)handleFailedAssertWithCondition:functionName:simulateCrash:showAlert:alertMessage:format:;
@end

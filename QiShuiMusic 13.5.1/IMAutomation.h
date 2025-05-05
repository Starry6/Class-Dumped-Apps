@interface IMAutomation : NSObject
- (BOOL)checkArgumentValidity:forExpectedNumberOfArguments:;
- (id)callIMCoreMethodWithDictionary:;
- (id)IMCoreAutomationPerformOperationWithDictionary:;
- (id)startConversationFrom:andReceiveAt:;
@end

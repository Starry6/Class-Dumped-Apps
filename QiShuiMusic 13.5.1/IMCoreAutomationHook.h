@interface IMCoreAutomationHook : NSObject
@property (nonatomic) IMAccount bestiMessageAccount;
- (void).cxx_destruct;
- (id)bestiMessageAccount;
- (id)chatForHandles:error:results:;
- (id)handlesFromStrings:error:results:;
- (id)existingChatForGroupID:error:results:;
+ (id)stringFromAutomationErrorCode:;
@end

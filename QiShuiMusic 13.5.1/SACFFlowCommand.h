@interface SACFFlowCommand : SACFAbstractClientCommand
@property (nonatomic) NSDictionary jsDialogScripts;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)jsDialogScripts;
- (void)setJsDialogScripts:;
+ (id)flowCommand;
+ (id)flowCommandWithDictionary:context:;
@end

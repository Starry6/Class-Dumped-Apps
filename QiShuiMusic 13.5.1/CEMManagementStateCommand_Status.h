@interface CEMManagementStateCommand_Status : CEMPayloadBase
@property (nonatomic) NSArray statusCommands;
@property (nonatomic) NSArray statusDeclarations;
- (void).cxx_destruct;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusCommands;
- (void)setStatusCommands:;
- (id)statusDeclarations;
- (void)setStatusDeclarations:;
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithCommands:withDeclarations:;
+ (id)buildRequiredOnlyWithCommands:withDeclarations:;
@end

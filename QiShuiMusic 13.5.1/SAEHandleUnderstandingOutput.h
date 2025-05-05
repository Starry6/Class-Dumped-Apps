@interface SAEHandleUnderstandingOutput : SABaseClientBoundCommand
@property (nonatomic) NSArray policyActionList;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)policyActionList;
- (void)setPolicyActionList:;
@end

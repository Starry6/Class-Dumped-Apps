@interface SAUIUnlockDeviceWithWatch : SABaseClientBoundCommand
@property (nonatomic) NSArray failureCommands;
@property (nonatomic) NSArray successCommands;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)failureCommands;
- (void)setFailureCommands:;
- (id)successCommands;
- (void)setSuccessCommands:;
@end

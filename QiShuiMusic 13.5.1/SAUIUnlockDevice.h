@interface SAUIUnlockDevice : SABaseClientBoundCommand
@property (nonatomic) NSArray cancellationCommands;
@property (nonatomic) NSArray failureCommands;
@property (nonatomic) NSArray successCommands;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)cancellationCommands;
- (void)setCancellationCommands:;
- (id)failureCommands;
- (void)setFailureCommands:;
- (id)successCommands;
- (void)setSuccessCommands:;
+ (id)unlockDevice;
+ (id)unlockDeviceWithDictionary:context:;
@end

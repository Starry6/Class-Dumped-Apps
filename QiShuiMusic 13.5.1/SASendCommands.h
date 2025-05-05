@interface SASendCommands : SABaseClientBoundCommand
@property (nonatomic) NSArray commands;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)commands;
- (id)encodedClassName;
- (void)setCommands:;
+ (id)sendCommands;
+ (id)sendCommandsWithDictionary:context:;
@end

@interface SAWaitForCommands : SABaseClientBoundCommand
@property (nonatomic) NSArray commandAceIds;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)commandAceIds;
- (void)setCommandAceIds:;
+ (id)waitForCommands;
+ (id)waitForCommandsWithDictionary:context:;
@end

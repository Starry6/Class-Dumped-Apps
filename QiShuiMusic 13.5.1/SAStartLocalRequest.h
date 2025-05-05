@interface SAStartLocalRequest : SABaseClientBoundCommand
@property (nonatomic) NSArray clientBoundCommands;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)clientBoundCommands;
- (void)setClientBoundCommands:;
+ (id)startLocalRequest;
+ (id)startLocalRequestWithDictionary:context:;
@end

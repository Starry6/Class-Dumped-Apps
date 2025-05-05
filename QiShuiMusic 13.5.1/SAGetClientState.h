@interface SAGetClientState : SABaseClientBoundCommand
@property (nonatomic) NSArray statesToGet;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)statesToGet;
- (void)setStatesToGet:;
+ (id)getClientState;
+ (id)getClientStateWithDictionary:context:;
@end

@interface SAGetMultipleClientStates : SABaseClientBoundCommand
@property (nonatomic) NSArray clientStateGetters;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)clientStateGetters;
- (void)setClientStateGetters:;
+ (id)getMultipleClientStates;
+ (id)getMultipleClientStatesWithDictionary:context:;
@end

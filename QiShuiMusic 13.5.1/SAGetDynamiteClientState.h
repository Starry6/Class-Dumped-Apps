@interface SAGetDynamiteClientState : SABaseClientBoundCommand
@property (nonatomic) SADynamiteClientState clientState;
@property (nonatomic) NSString appId;
@property (nonatomic) NSArray callbacks;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)clientState;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (void)setClientState:;
+ (id)getDynamiteClientState;
+ (id)getDynamiteClientStateWithDictionary:context:;
@end

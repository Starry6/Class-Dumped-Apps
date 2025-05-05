@interface SAProfileSwitch : SABaseClientBoundCommand
@property (nonatomic) NSString sharedUserId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)sharedUserId;
- (void)setSharedUserId:;
- (BOOL)mutatingCommand;
@end

@interface SARemembersSaveInteraction : SABaseClientBoundCommand
@property (nonatomic) NSString jsonEncodedIntent;
@property (nonatomic) NSString jsonEncodedIntentResponse;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)jsonEncodedIntent;
- (void)setJsonEncodedIntent:;
- (id)jsonEncodedIntentResponse;
- (void)setJsonEncodedIntentResponse:;
+ (id)saveInteraction;
+ (id)saveInteractionWithDictionary:context:;
@end

@interface SAPhoneCallConfirmationSnippet : SAUISnippet
@property (nonatomic) NSString confirmationDisplayText;
@property (nonatomic) NSArray persons;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)persons;
- (void)setPersons:;
- (id)confirmationDisplayText;
- (void)setConfirmationDisplayText:;
@end

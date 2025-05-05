@interface CNMailToGroup : NSObject
@property (nonatomic) CNContactFormatter contactFormatter;
- (id)init;
- (id)contactFormatter;
- (void)setContactFormatter:;
- (void).cxx_destruct;
- (id)mailUrlForContacts:needsEmailAddresses:;
- (id)mailUrlForContacts:;
- (id)bestGuessEmailAddressForContact:;
- (id)mailUrlWithEmailAddressesForContacts:;
- (id)mailUrlForMailingAddresses:;
- (BOOL)allContactsHaveEmailAddress:;
- (id)mailingAddressWithEmailForContact:;
- (id)mailingAddressForContact:;
- (id)santizeMailingAddress:;
+ (id)descriptorForRequiredKeys;
+ (id)os_log;
+ (id)bestGuessEmailAddressForContact:;
+ (id)bestGuessEmailAddressForContact:sendingAddressDomain:;
+ (id)bestGuessEmailAddressForAddresses:sendingAddressDomain:alreadyDuetRanked:;
+ (id)queryForEmailAddresses:;
@end

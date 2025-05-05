@interface EKParticipantToContactMatcher : NSObject
@property (nonatomic) NSArray contacts;
@property (nonatomic) NSSet contactEmailAddresses;
@property (nonatomic) NSSet contactNameComponents;
@property (nonatomic) NSSet contactCompanyNames;
- (void)setContacts:;
- (id)contacts;
- (void).cxx_destruct;
- (id)initWithContacts:;
- (void)_cacheContactData;
- (BOOL)anyContactMatchesAnyParticipantFromItem:;
- (BOOL)anyContactMatchesAnyParticipant:;
- (id)matchingParticipantsFromItem:;
- (id)matchingParticipantsFromParticipants:;
- (BOOL)anyContactMatchesParticipant:;
- (id)contactEmailAddresses;
- (void)setContactEmailAddresses:;
- (id)contactNameComponents;
- (void)setContactNameComponents:;
- (id)contactCompanyNames;
- (void)setContactCompanyNames:;
+ (id)_nameComponentsForContact:reverse:;
+ (id)_nameComponentsWithGivenName:familyName:;
+ (id)_allParticipantsOnItem:;
@end

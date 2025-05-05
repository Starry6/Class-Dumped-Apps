@interface INRestaurantGuest : INPerson
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString emailAddress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)emailAddress;
- (id)phoneNumber;
- (id)_dictionaryRepresentation;
- (void)setEmailAddress:;
- (void)setPhoneNumber:;
- (id)initWithPersonHandle:nameComponents:displayName:image:contactIdentifier:customIdentifier:isMe:;
- (id)initWithCoder:;
- (id)initWithNameComponents:phoneNumber:emailAddress:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_initWithUserInput:personHandle:nameComponents:displayName:image:contactIdentifier:customIdentifier:relationship:aliases:suggestionType:isMe:scoredAlternatives:sourceAppBundleIdentifier:phonemeData:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

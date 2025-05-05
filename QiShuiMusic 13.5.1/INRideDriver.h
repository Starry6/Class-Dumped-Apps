@interface INRideDriver : INPerson
@property (nonatomic) NSString rating;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_injectProxiesForImages:completion:;
- (id)rating;
- (id)phoneNumber;
- (id)_initWithUserInput:personHandle:nameComponents:displayName:image:contactIdentifier:rating:phoneNumber:;
- (id)_dictionaryRepresentation;
- (id)initWithHandle:displayName:image:rating:phoneNumber:;
- (id)initWithPhoneNumber:nameComponents:displayName:image:rating:;
- (id)initWithPersonHandle:nameComponents:displayName:image:contactIdentifier:customIdentifier:isMe:;
- (id)_initWithUserInput:personHandle:nameComponents:displayName:image:contactIdentifier:rating:aliases:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithPersonHandle:nameComponents:displayName:image:rating:phoneNumber:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithHandle:nameComponents:image:rating:phoneNumber:;
- (id)_initWithUserInput:personHandle:nameComponents:displayName:image:contactIdentifier:customIdentifier:relationship:aliases:suggestionType:isMe:scoredAlternatives:sourceAppBundleIdentifier:phonemeData:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

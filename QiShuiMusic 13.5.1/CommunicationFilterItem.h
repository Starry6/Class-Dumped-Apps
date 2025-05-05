@interface CommunicationFilterItem : NSObject
@property (nonatomic) ^{__CFPhoneNumber=} phoneNumber;
@property (nonatomic) NSString emailAddress;
@property (nonatomic) NSString unformattedID;
- (id)emailAddress;
- (void)dealloc;
- (id)phoneNumber;
- (id)initWithDictionaryRepresentation:;
- (id)initWithEmailAddress:;
- (id)description;
- (BOOL)isPhoneNumber;
- (id)dictionaryRepresentation;
- (id)initWithPhoneNumber:;
- (id)unformattedID;
- (BOOL)_acceptItemType:;
- (BOOL)_acceptVersion:;
- (BOOL)matchesFilterItem:;
- (id)_dictionaryRepresentationWithRedaction;
@end

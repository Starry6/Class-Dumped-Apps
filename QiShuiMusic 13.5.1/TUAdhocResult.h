@interface TUAdhocResult : NSObject
@property (nonatomic) NSString value;
@property (nonatomic) TUSearchController searchController;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString callerId;
@property (nonatomic) CNContact backingContact;
@property (nonatomic) NSString backingContactId;
@property (nonatomic) NSString backingContactIdentifier;
@property (nonatomic) NSString destinationId;
@property (nonatomic) NSString isoCountryCode;
@property (nonatomic) NSArray handles;
@property (nonatomic) q mostRecentCallType;
@property (nonatomic) BOOL mostRecentCallWasMissed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray idsCanonicalDestinations;
- (void)setSearchController:;
- (id)initWithString:;
- (id)isoCountryCode;
- (id)displayName;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)handles;
- (id)searchController;
- (id)callerId;
- (id)backingContact;
- (id)backingContactId;
- (id)backingContactIdentifier;
- (id)destinationId;
- (long long)mostRecentCallType;
- (BOOL)mostRecentCallWasMissed;
- (id)idsCanonicalDestinations;
@end

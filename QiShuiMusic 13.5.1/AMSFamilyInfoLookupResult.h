@interface AMSFamilyInfoLookupResult : NSObject
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) BOOL cached;
@property (nonatomic) NSArray familyMembers;
@property (nonatomic) NSNumber headOfHouseholdICloudDSID;
@property (nonatomic) BOOL headOfHouseholdSharingPayment;
- (id)familyMembers;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isCached;
- (id)initWithDictionaryRepresentation:cached:;
- (id)headOfHouseholdICloudDSID;
- (BOOL)isHeadOfHouseholdSharingPayment;
+ (id)_familyMembersFromDictionaryRepresentation:;
@end

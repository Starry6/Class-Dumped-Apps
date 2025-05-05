@interface CNUICoreFamilyElement : NSObject
@property (nonatomic) FAFamilyMember familyMember;
@property (nonatomic) NSArray matchingContacts;
@property (nonatomic) BOOL hasMatchingContacts;
@property (nonatomic) BOOL isParent;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isParent;
- (id)familyMember;
- (id)matchingContacts;
- (id)initWithFamilyMember:matchingContacts:;
- (BOOL)hasMatchingContacts;
- (BOOL)containsFamilyMember:;
@end

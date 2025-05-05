@interface CNiOSABGroupsWithMembersPredicate : CNPredicate
@property (nonatomic) NSArray recordIdentifiers;
@property (nonatomic) I recordType;
@property (nonatomic) BOOL includeAllParentGroups;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned int)recordType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)cn_copyGroupsInAddressBook:error:;
- (id)initWithGroup:includeAllParentGroups:;
- (id)initWithContact:includeAllParentGroups:;
- (id)recordIdentifiers;
- (BOOL)includeAllParentGroups;
+ (BOOL)supportsSecureCoding;
@end

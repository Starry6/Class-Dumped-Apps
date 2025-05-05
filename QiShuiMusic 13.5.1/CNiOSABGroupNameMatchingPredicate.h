@interface CNiOSABGroupNameMatchingPredicate : CNPredicate
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithName:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)cn_copyGroupsInAddressBook:error:;
- (BOOL)groupName:matchesSearchTokens:;
+ (BOOL)supportsSecureCoding;
+ (id)tokenizeString:;
+ (id)groupNameTokenizingCharacterSet;
@end

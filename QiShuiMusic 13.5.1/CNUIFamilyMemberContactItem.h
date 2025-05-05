@interface CNUIFamilyMemberContactItem : NSObject
@property (nonatomic) NSString contactIdentifier;
@property (nonatomic) NSString label;
@property (nonatomic) NSString detailLabel;
@property (nonatomic) BOOL unreachable;
- (id)initWithLabel:;
- (id)init;
- (id)contactIdentifier;
- (unsigned long long)hash;
- (id)label;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithLabel:detailLabel:unreachable:;
- (id)initWithContactIdentifier:label:detailLabel:unreachable:;
- (id)detailLabel;
- (BOOL)isUnreachable;
+ (id)familyMemberContactItemFromCoreFamilyMemberContactItem:;
+ (id)typeLabelStringFromContactType:;
@end

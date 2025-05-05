@interface CNUICoreFamilyMemberContactsModel : NSObject
@property (nonatomic) NSArray items;
- (id)initWithItems:;
- (id)init;
- (id)items;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

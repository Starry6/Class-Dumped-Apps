@interface CNLinkedContactsPredicate : CNPredicate
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) CNContact contact;
@property (nonatomic) NSString contactIdentifier;
- (id)contactIdentifier;
- (id)initWithContact:;
- (id)contact;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithContactIdentifier:;
+ (BOOL)supportsSecureCoding;
@end

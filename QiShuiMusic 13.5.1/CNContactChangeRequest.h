@interface CNContactChangeRequest : NSObject
@property (nonatomic) NSArray contacts;
@property (nonatomic) NSArray contactIdentifiers;
@property (nonatomic) q kind;
@property (nonatomic) NSString linkIdentifier;
- (id)contactIdentifiers;
- (id)contacts;
- (long long)kind;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithKind:contacts:linkIdentifier:;
- (id)linkIdentifier;
+ (BOOL)supportsSecureCoding;
+ (id)contactChangeRequestWithKind:contacts:linkIdentifier:;
@end

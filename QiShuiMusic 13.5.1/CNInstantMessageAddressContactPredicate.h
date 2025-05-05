@interface CNInstantMessageAddressContactPredicate : CNPredicate
@property (nonatomic) CNInstantMessageAddress imAddress;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)imAddress;
- (id)initWithInstantMessageAddress:;
+ (BOOL)supportsSecureCoding;
@end

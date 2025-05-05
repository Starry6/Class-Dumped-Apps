@interface AAInheritance : NSObject
@property (nonatomic) NSArray beneficiaries;
@property (nonatomic) NSArray benefactors;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)beneficiaries;
- (id)benefactors;
+ (BOOL)supportsSecureCoding;
@end

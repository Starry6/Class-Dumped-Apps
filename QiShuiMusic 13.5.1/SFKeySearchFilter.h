@interface SFKeySearchFilter : NSObject
@property (nonatomic) NSArray specifiers;
@property (nonatomic) NSArray domains;
- (id)specifiers;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setDomains:;
- (void)setSpecifiers:;
- (id)domains;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

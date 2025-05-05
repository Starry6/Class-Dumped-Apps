@interface CTPhoneBookEntry : NSObject
@property (nonatomic) BOOL isHidden;
@property (nonatomic) NSString name;
@property (nonatomic) NSString number;
@property (nonatomic) NSString altNumber;
@property (nonatomic) NSString altText;
@property (nonatomic) NSString email;
@property (nonatomic) NSString group;
- (id)number;
- (void)setName:;
- (id)initWithCoder:;
- (void)setGroup:;
- (void)setEmail:;
- (void)setNumber:;
- (id)group;
- (void)encodeWithCoder:;
- (void)setIsHidden:;
- (void).cxx_destruct;
- (id)description;
- (id)email;
- (id)name;
- (BOOL)isHidden;
- (id)copyWithZone:;
- (id)altNumber;
- (void)setAltNumber:;
- (id)altText;
- (void)setAltText:;
+ (BOOL)supportsSecureCoding;
@end

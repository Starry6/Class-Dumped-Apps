@interface PHCameraSmartSharingIdentity : NSObject
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString emailAddress;
@property (nonatomic) NSArray contactIdentifiers;
- (id)emailAddress;
- (id)contactIdentifiers;
- (id)phoneNumber;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithPhoneNumber:emailAddress:contactIdentifiers:;
+ (BOOL)supportsSecureCoding;
@end

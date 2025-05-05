@interface SFAppleIDPersonInfo : NSObject
@property (nonatomic) NSDate validUntilDate;
@property (nonatomic) NSString accountIdentifier;
@property (nonatomic) NSString altDSID;
@property (nonatomic) q certificateStatus;
@property (nonatomic) BOOL didMatchEmail;
@property (nonatomic) BOOL didMatchPhone;
@property (nonatomic) BOOL isStale;
@property (nonatomic) NSString matchedValue;
- (BOOL)isStale;
- (id)accountIdentifier;
- (id)altDSID;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)validUntilDate;
- (BOOL)isEqualToPersonInfo:;
- (long long)certificateStatus;
- (BOOL)didMatchEmail;
- (BOOL)didMatchPhone;
- (id)matchedValue;
+ (BOOL)supportsSecureCoding;
@end

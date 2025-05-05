@interface DMFAppManagementInformation : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) Q state;
@property (nonatomic) Q options;
@property (nonatomic) NSString redemptionCode;
@property (nonatomic) NSString unusedRedemptionCode;
- (void)setOptions:;
- (void)setState:;
- (id)initWithCoder:;
- (void)setDisplayName:;
- (id)displayName;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)_stringForOptions:;
- (id)redemptionCode;
- (void)setRedemptionCode:;
- (id)unusedRedemptionCode;
- (void)setUnusedRedemptionCode:;
+ (id)stringForState:;
+ (BOOL)supportsSecureCoding;
@end

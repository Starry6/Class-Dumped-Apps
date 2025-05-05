@interface ASDRepairApplicationRequestOptions : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSNumber accountDSID;
@property (nonatomic) q claimStyle;
@property (nonatomic) Q exitReason;
- (unsigned long long)exitReason;
- (id)accountDSID;
- (id)initWithCoder:;
- (id)initWithBundleID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:;
- (id)initWithBundleID:accountIdentifier:claimStyle:;
- (long long)claimStyle;
- (void)setExitReason:;
+ (BOOL)supportsSecureCoding;
@end

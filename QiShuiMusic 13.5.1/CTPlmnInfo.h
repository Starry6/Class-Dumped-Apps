@interface CTPlmnInfo : NSObject
@property (nonatomic) NSString mcc;
@property (nonatomic) NSString mnc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)mcc;
- (id)mnc;
- (id)initWithMcc:mnc:;
+ (BOOL)supportsSecureCoding;
@end

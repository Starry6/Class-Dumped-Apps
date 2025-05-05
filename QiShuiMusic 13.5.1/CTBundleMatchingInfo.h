@interface CTBundleMatchingInfo : NSObject
@property (nonatomic) NSString mcc;
@property (nonatomic) NSString mnc;
@property (nonatomic) NSString imsi;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)imsi;
- (void)setImsi:;
- (id)mcc;
- (void)setMcc:;
- (id)mnc;
- (void)setMnc:;
+ (BOOL)supportsSecureCoding;
@end

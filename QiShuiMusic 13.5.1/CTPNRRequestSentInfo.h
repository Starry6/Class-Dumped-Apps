@interface CTPNRRequestSentInfo : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSString token;
@property (nonatomic) NSNumber timeout;
- (id)init;
- (id)token;
- (void)setTimeout:;
- (id)initWithCoder:;
- (BOOL)success;
- (void)setSuccess:;
- (void)setToken:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)timeout;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToCTPNRRequestSentInfo:;
+ (BOOL)supportsSecureCoding;
@end

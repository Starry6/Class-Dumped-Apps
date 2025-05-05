@interface NRClientInfo : NSObject
@property (nonatomic) NSString processName;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)processName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setProcessName:;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

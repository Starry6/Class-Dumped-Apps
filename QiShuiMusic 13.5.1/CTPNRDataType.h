@interface CTPNRDataType : NSObject
@property (nonatomic) q pnrMechanism;
@property (nonatomic) NSString svcCenterAddr;
@property (nonatomic) NSString destAddr;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToCTPNRDataType:;
- (long long)pnrMechanism;
- (void)setPnrMechanism:;
- (id)svcCenterAddr;
- (void)setSvcCenterAddr:;
- (id)destAddr;
- (void)setDestAddr:;
+ (BOOL)supportsSecureCoding;
@end

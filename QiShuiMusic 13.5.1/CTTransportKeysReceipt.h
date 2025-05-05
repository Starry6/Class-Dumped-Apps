@interface CTTransportKeysReceipt : NSObject
@property (nonatomic) NSArray stks;
@property (nonatomic) NSString sps_environment;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWith:;
- (id)initWith:sps:;
- (id)sps_environment;
- (void)setSps_environment:;
- (id)stks;
- (void)setStks:;
+ (BOOL)supportsSecureCoding;
@end

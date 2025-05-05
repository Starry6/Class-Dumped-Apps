@interface CTTransportKeysUpdate : NSObject
@property (nonatomic) NSArray keys;
@property (nonatomic) NSString sps_environment;
- (id)keys;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setKeys:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWith:;
- (id)initWith:sps:;
- (id)sps_environment;
- (void)setSps_environment:;
+ (BOOL)supportsSecureCoding;
@end

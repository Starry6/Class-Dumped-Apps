@interface VNEntityIdentificationModelReadOptions : NSObject
@property (nonatomic) NSIndexSet acceptableVersions;
- (id)acceptableVersions;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setAcceptableVersions:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

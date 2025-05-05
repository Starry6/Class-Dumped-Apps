@interface VNPersonsModelInformation : NSObject
@property (nonatomic) Q version;
@property (nonatomic) NSDate lastModificationDate;
@property (nonatomic) VNPersonsModelAlgorithm algorithm;
@property (nonatomic) BOOL readOnly;
- (BOOL)isReadOnly;
- (id)algorithm;
- (unsigned long long)version;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)lastModificationDate;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithVersion:lastModificationDate:algorithm:readOnly:;
+ (BOOL)supportsSecureCoding;
@end

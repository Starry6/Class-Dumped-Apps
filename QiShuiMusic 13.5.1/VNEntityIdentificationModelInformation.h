@interface VNEntityIdentificationModelInformation : NSObject
@property (nonatomic) Q version;
@property (nonatomic) NSDate lastModificationDate;
@property (nonatomic) BOOL readOnly;
@property (nonatomic) VNEntityIdentificationModelAlgorithm algorithm;
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
- (id)initWithVersion:algorithm:lastModificationDate:readOnly:;
+ (BOOL)supportsSecureCoding;
@end

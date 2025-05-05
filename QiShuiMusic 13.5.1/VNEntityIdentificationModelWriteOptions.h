@interface VNEntityIdentificationModelWriteOptions : NSObject
@property (nonatomic) Q version;
@property (nonatomic) BOOL readOnly;
- (BOOL)readOnly;
- (id)init;
- (void)setReadOnly:;
- (void)setVersion:;
- (unsigned long long)version;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

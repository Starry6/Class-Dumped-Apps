@interface WBSCRDTGeneration : NSObject
@property (nonatomic) NSString deviceIdentifier;
@property (nonatomic) Q generation;
@property (nonatomic) BOOL isValid;
- (id)init;
- (id)deviceIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDeviceIdentifier:generation:;
- (void)encodeWithCoder:;
- (long long)compare:;
- (BOOL)isValid;
- (id)incrementedGenerationWithDeviceIdentifier:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)generation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

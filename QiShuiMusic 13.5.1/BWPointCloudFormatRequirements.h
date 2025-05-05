@interface BWPointCloudFormatRequirements : BWFormatRequirements
@property (nonatomic) NSArray supportedDataFormats;
@property (nonatomic) Q maxPoints;
@property (nonatomic) Q dataBufferSize;
@property (nonatomic) NSDictionary dataBufferAttributes;
@property (nonatomic) BOOL memoryPoolUseAllowed;
- (unsigned int)mediaType;
- (id)init;
- (id)supportedDataFormats;
- (void)dealloc;
- (BOOL)memoryPoolUseAllowed;
- (void)setMemoryPoolUseAllowed:;
- (void)setDataBufferSize:;
- (void)setSupportedDataFormats:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (unsigned long long)dataBufferSize;
- (void)encodeWithCoder:;
- (void)setMaxPoints:;
- (Class)formatClass;
- (unsigned long long)maxPoints;
- (id)description;
- (id)dataBufferAttributes;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end

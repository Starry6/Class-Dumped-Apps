@interface SGExtractionInfo : NSObject
@property (nonatomic) Q extractionType;
@property (nonatomic) NSNumber modelVersion;
@property (nonatomic) NSNumber confidence;
- (id)confidence;
- (id)modelVersion;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (unsigned long long)extractionType;
- (id)initWithExtractionType:modelVersion:confidence:;
+ (BOOL)supportsSecureCoding;
+ (id)extractionInfoWithExtractionType:modelVersion:confidence:;
@end

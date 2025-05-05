@interface VNRecognizedHandPointsSpecifier : VNRecognizedPointsSpecifier
@property (nonatomic) q chirality;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)availableGroupKeys;
- (id)pointKeyGroupLabelsMapping;
- (id)populatedMLMultiArrayAndReturnError:;
- (long long)chirality;
- (id)initWithVCPHandObservation:originatingRequestSpecifier:;
+ (BOOL)supportsSecureCoding;
@end

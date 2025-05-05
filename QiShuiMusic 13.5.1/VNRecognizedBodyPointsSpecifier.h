@interface VNRecognizedBodyPointsSpecifier : VNRecognizedPointsSpecifier
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithVCPPersonObservation:originatingRequestSpecifier:;
- (id)availableGroupKeys;
- (id)pointKeyGroupLabelsMapping;
- (id)populatedMLMultiArrayAndReturnError:;
+ (BOOL)supportsSecureCoding;
@end

@interface VNRecognizedPointsSpecifier : NSObject
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)availableKeys;
- (id)initWithOriginatingRequestSpecifier:allRecognizedPoints:;
- (id)availableGroupKeys;
- (id)pointKeyGroupLabelsMapping;
- (id)populatedMLMultiArrayAndReturnError:;
- (id)recognizedPointsForGroupKey:error:;
- (id)recognizedPointForKey:error:;
- (id)originatingRequestSpecifier;
+ (BOOL)supportsSecureCoding;
@end

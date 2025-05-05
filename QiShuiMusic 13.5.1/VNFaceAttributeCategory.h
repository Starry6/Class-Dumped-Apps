@interface VNFaceAttributeCategory : NSObject
@property (nonatomic) VNClassificationObservation label;
@property (nonatomic) NSArray allLabelsWithConfidences;
@property (nonatomic) Q requestRevision;
- (void)setLabel:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)label;
- (void)encodeWithCoder:;
- (unsigned long long)requestRevision;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)allLabelsWithConfidences;
- (id)vn_cloneObject;
- (void)_computeLabel;
- (void)setAllLabelsWithConfidences:;
- (id)initWithRequestRevision:;
+ (BOOL)supportsSecureCoding;
@end

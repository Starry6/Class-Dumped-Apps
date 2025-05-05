@interface VNRecognizedTextBlock : VNRecognizedText
@property (nonatomic) NSAttributedString attributedString;
@property (nonatomic) NSArray baselines;
@property (nonatomic) NSArray recognizedLanguages;
- (id)string;
- (float)confidence;
- (id)initWithCoder:;
- (id)attributedString;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)requestRevision;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)boundingBoxForRange:error:;
- (id)initWithRequestRevision:crOutputRegion:;
- (id)getCROutputRegion;
- (id)getRecognizedLanguages;
- (id)baselines;
+ (BOOL)supportsSecureCoding;
@end

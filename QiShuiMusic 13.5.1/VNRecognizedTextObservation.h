@interface VNRecognizedTextObservation : VNRectangleObservation
@property (nonatomic) NSArray textObjects;
@property (nonatomic) BOOL isTitle;
@property (nonatomic) NSString text;
- (void)setText:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)text;
- (BOOL)isEqual:;
- (id)topCandidates:;
- (BOOL)isTitle;
- (id)vn_cloneObject;
- (id)textObjects;
- (void)setTextObjects:;
- (void)setIsTitle:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end

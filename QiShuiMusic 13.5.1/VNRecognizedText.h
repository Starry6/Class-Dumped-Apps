@interface VNRecognizedText : NSObject
@property (nonatomic) Q requestRevision;
@property (nonatomic) CRImageReaderOutput crOutput;
@property (nonatomic) NSString string;
@property (nonatomic) float confidence;
- (id)string;
- (float)confidence;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (unsigned long long)requestRevision;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithRequestRevision:CRImageReaderOutput:;
- (id)boundingBoxForRange:error:;
- (void)setRequestRevision:;
- (id)crOutput;
+ (BOOL)supportsSecureCoding;
@end

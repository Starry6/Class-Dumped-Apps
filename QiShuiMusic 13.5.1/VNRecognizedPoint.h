@interface VNRecognizedPoint : VNDetectedPoint
@property (nonatomic) NSString identifier;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)transformedWith:;
- (id)initWithLocation:confidence:identifier:;
+ (BOOL)supportsSecureCoding;
@end

@interface VNFaceScreenGaze : NSObject
@property (nonatomic) VNRequestSpecifier originatingRequestSpecifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)originatingRequestSpecifier;
- (id)screenGazeRawOutputInCentimeters;
+ (BOOL)supportsSecureCoding;
@end

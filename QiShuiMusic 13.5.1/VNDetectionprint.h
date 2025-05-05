@interface VNDetectionprint : NSObject
@property (nonatomic) Q requestRevision;
@property (nonatomic) VNRequestSpecifier originatingRequestSpecifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)requestRevision;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)originatingRequestSpecifier;
- (id)tensorForKey:error:;
- (id)initWithTensorsDictionary:originatingRequestSpecifier:;
- (id)initWithTensorsDictionary:requestRevision:;
+ (BOOL)supportsSecureCoding;
+ (id)knownTensorKeysForRequestRevision:error:;
@end

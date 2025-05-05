@interface VNImageSignature : NSObject
@property (nonatomic) r^{FastRegistration_Signatures=^fQ{Projections_meanStdTable=^f^f}^fQ{Projections_meanStdTable=^f^f}*} signature;
- (id)signature;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)initWithImageBuffer:regionOfInterest:error:;
+ (BOOL)supportsSecureCoding;
@end

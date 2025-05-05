@interface VNFeaturePrintObservation : VNObservation
@property (nonatomic) Q elementType;
@property (nonatomic) Q elementCount;
@property (nonatomic) NSData data;
- (id)data;
- (unsigned long long)elementType;
- (unsigned long long)elementCount;
- (BOOL)computeDistance:toFeaturePrintObservation:error:;
- (float)computeDistanceToFeaturePrintObservation:error:;
+ (BOOL)supportsSecureCoding;
@end

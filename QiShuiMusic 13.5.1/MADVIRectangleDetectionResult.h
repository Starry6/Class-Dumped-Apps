@interface MADVIRectangleDetectionResult : MADResult
@property (nonatomic) NSArray observations;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)observations;
- (id)initWithObservations:;
+ (BOOL)supportsSecureCoding;
@end

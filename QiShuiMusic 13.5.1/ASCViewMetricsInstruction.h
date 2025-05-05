@interface ASCViewMetricsInstruction : NSObject
@property (nonatomic) ASCMetricsData data;
@property (nonatomic) NSSet invocationPoints;
- (id)data;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithData:invocationPoints:;
- (id)invocationPoints;
+ (BOOL)supportsSecureCoding;
@end

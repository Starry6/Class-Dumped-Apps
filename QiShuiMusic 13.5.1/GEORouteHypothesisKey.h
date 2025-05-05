@interface GEORouteHypothesisKey : NSObject
@property (nonatomic) GEORouteHypothesisRequest request;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)request;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithRouteHypothesisRequest:;
- (BOOL)_isEqual:;
+ (BOOL)supportsSecureCoding;
@end

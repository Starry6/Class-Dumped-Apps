@interface MTTreatmentContext : NSObject
@property (nonatomic) MTTreatment treatment;
@property (nonatomic) NSDictionary metrics;
- (id)treatment;
- (void)setMetrics:;
- (id)metrics;
- (void)setTreatment:;
- (void).cxx_destruct;
- (id)initWithTreatment:metrics:;
@end

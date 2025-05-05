@interface MTNumberDeresAction : MTTreatmentAction
@property (nonatomic) double precision;
@property (nonatomic) NSArray buckets;
- (void)setPrecision:;
- (double)precision;
- (void).cxx_destruct;
- (id)buckets;
- (void)setBuckets:;
- (id)performAction:context:;
- (id)initWithField:configDictionary:;
@end

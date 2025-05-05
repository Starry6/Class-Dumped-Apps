@interface AMapTrafficEvaluation : AMapSearchObject
@property (nonatomic) NSString evaluationDescription;
@property (nonatomic) q status;
@property (nonatomic) NSString expedite;
@property (nonatomic) NSString congested;
@property (nonatomic) NSString blocked;
@property (nonatomic) NSString unknown;
- (id)congested;
- (id)evaluationDescription;
- (id)expedite;
- (void)setCongested:;
- (void)setEvaluationDescription:;
- (void)setExpedite:;
- (id)unknown;
- (void)setStatus:;
- (void)setUnknown:;
- (void).cxx_destruct;
- (long long)status;
- (id)blocked;
- (void)setBlocked:;
+ (id)ajo_mapping;
@end

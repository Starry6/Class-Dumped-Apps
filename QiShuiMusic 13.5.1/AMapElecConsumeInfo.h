@interface AMapElecConsumeInfo : AMapSearchObject
@property (nonatomic) q energy;
@property (nonatomic) NSArray leftEnergy;
@property (nonatomic) AMapGeoPoint runoutPoint;
@property (nonatomic) q runoutStepIndex;
- (BOOL)ajo_validateValue:forKey:error:;
- (void)setRunoutPoint:;
- (long long)runoutStepIndex;
- (id)leftEnergy;
- (id)runoutPoint;
- (void)setLeftEnergy:;
- (void)setRunoutStepIndex:;
- (long long)energy;
- (void).cxx_destruct;
- (void)setEnergy:;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end

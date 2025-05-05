@interface AMapTrafficInfo : AMapSearchObject
@property (nonatomic) NSString statusDescription;
@property (nonatomic) AMapTrafficEvaluation evaluation;
@property (nonatomic) NSArray roads;
- (void)setRoads:;
- (id)statusDescription;
- (void).cxx_destruct;
- (id)roads;
- (id)evaluation;
- (void)setStatusDescription:;
- (void)setEvaluation:;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end

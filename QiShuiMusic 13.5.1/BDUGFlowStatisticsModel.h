@interface BDUGFlowStatisticsModel : BDUGFlowBasicModel
@property (nonatomic) double flow;
@property (nonatomic) BOOL isOrder;
- (BOOL)isOrder;
- (void)setIsOrder:;
- (id)copyWithZone:;
- (double)flow;
- (void)setFlow:;
- (id)toJsonDictionary;
+ (id)modelWithDictionary:;
@end

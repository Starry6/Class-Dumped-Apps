@interface AWEIronManBizPathRecord : NSObject
@property (nonatomic) NSString bizPathName;
@property (nonatomic) NSString routeId;
@property (nonatomic) NSArray bizStages;
@property (nonatomic) NSDictionary commonParams;
@property (nonatomic) NSDictionary firstStageEventParams;
@property (nonatomic) AWEIronManBizPathConfig pathConfig;
@property (nonatomic) double expiredTime;
- (id)trackParams;
- (id)commonParams;
- (void)setCommonParams:;
- (double)expiredTime;
- (void)setExpiredTime:;
- (id)bizPathName;
- (id)bizStages;
- (void)setBizPathName:;
- (void)setBizStages:;
- (id)firstStageEventParams;
- (void)setFirstStageEventParams:;
- (id)pathConfig;
- (void)setPathConfig:;
- (void).cxx_destruct;
- (id)routeId;
- (void)setRouteId:;
@end

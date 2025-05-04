@interface AWELiveLocalLifeParamsManager : NSObject
@property (nonatomic) NSDictionary paramsOptimizeWhiteListConfig;
@property (nonatomic) NSArray functionalParamsList;
- (id)filterSessionParams:passParams:;
- (void)setParamsOptimizeWhiteListConfig:;
- (void)setFunctionalParamsList:;
- (id)filterParamsForUrlString:originServerUrl:enableOptimize:;
- (id)paramsOptimizeWhiteListConfig;
- (id)functionalParamsList;
- (id)filterSessionParams:passParams:enableOptimize:;
- (id)filterTrackerRoomData:enableOptimize:;
- (id)filterParamsForUrlString:originServerUrl:;
- (id)filterTrackerRoomData:;
- (void).cxx_destruct;
+ (id)shareManager;
@end

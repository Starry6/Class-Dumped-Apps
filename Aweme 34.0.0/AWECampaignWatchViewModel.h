@interface AWECampaignWatchViewModel : NSObject
@property (nonatomic) AWECampaignTaskModel taskModel;
@property (nonatomic) NSDictionary originalParamsDic;
- (id)taskModel;
- (void)setTaskModel:;
- (BOOL)isCSRWatchGame;
- (BOOL)isUGPendantWatchGame;
- (void)requestAwemeWithID:parameters:completion:;
- (void)setOriginalParamsDic:;
- (id)originalParamsDic;
- (id)paramsForRequest:;
- (void).cxx_destruct;
+ (id)configWithDic:;
+ (id)taskModelManual:;
+ (id)configModelWithParams:;
@end

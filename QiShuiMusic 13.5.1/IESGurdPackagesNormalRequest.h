@interface IESGurdPackagesNormalRequest : IESGurdMultiAccessKeysRequest
@property (nonatomic) IESGurdFetchResourcesParams params;
- (id)logInfo;
- (id)requestMetaDictionary;
- (id)statisticData;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)requestWithParams:completion:;
@end

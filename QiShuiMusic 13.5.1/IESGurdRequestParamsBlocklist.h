@interface IESGurdRequestParamsBlocklist : NSObject
- (void)addParams:forAccessKey:;
- (id)filteredParamsForAccessKey:originalParams:;
- (BOOL)isParamInBlocklistForAccessKey:param:;
- (void)removeParams:forAccessKey:;
- (id)init;
- (void).cxx_destruct;
@end

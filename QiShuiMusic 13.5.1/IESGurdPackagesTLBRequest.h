@interface IESGurdPackagesTLBRequest : IESGurdMultiAccessKeysRequest
- (id)logInfo;
- (BOOL)isParamsValid;
- (id)requestMetaDictionary;
- (id)statisticData;
- (long long)requestType;
- (void)setRequestType:;
- (id)init;
@end

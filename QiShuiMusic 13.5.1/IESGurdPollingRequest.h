@interface IESGurdPollingRequest : IESGurdMultiAccessKeysRequest
@property (nonatomic) q priority;
- (id)logInfo;
- (id)requestMetaDictionary;
- (id)statisticData;
- (void)setPriority:;
- (void)setTimer:;
- (id)timer;
- (id)description;
- (long long)priority;
+ (id)requestWithPriority:;
@end

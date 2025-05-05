@interface IESGurdAutoRequest : IESGurdMultiAccessKeysRequest
@property (nonatomic) NSInteger queueIndex;
- (id)logInfo;
- (id)requestMetaDictionary;
- (id)statisticData;
- (void)updateConfigWithParamsInfosArray:;
- (id)init;
- (int)queueIndex;
- (void)setQueueIndex:;
@end

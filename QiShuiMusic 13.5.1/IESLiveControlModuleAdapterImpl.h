@interface IESLiveControlModuleAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)replayInterface;
- (id)audienceClarityInterface;
- (id)screenRecordInterface;
- (id)streamQualityInterface;
- (id)tapContainerInterface;
@end

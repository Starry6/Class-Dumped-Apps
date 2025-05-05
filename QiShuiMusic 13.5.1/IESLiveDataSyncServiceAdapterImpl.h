@interface IESLiveDataSyncServiceAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addSubscriber:withSyncData:;
- (void)getValueWithSyncData:expectedMinVersion:completion:;
+ (id)targetProtocol;
@end

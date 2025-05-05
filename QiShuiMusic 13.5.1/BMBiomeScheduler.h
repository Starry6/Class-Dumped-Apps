@interface BMBiomeScheduler : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSString identifier;
@property (nonatomic) BMComputeXPCPublisherClient client;
@property (nonatomic) BOOL waking;
- (void)subscribeWithDSLGraph:forSubscriber:;
- (id)init;
- (id)initWithIdentifier:targetQueue:client:storageProvider:;
- (id)identifier;
- (id)initWithIdentifier:targetQueue:client:;
- (id)initWithIdentifier:targetQueue:client:waking:;
- (id)initWithIdentifier:targetQueue:client:waking:storageProvider:;
- (id)initWithIdentifier:targetQueue:waking:;
- (id)client;
- (void).cxx_destruct;
- (id)initWithIdentifier:targetQueue:;
- (id)queue;
- (BOOL)waking;
+ (id)new;
@end

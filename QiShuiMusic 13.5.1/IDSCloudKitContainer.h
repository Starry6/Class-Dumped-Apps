@interface IDSCloudKitContainer : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) IDSCKContainer container;
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) IDSCloudKitKeyValueStore keyValueStore;
@property (nonatomic) IDSCloudKitGroupServer publicGroupServer;
@property (nonatomic) IDSCloudKitGroupServer privateGroupServer;
@property (nonatomic) IDSCloudKitTransportLog transportLog;
@property (nonatomic) IDSCloudKitKeyElectionStore keyElectionStore;
- (void)setContainer:;
- (id)containerIdentifier;
- (id)keyValueStore;
- (id)container;
- (id)initWithIdentifier:queue:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (id)transportLog;
- (id)publicGroupServer;
- (id)privateGroupServer;
- (id)keyElectionStore;
@end

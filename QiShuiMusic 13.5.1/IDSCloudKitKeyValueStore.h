@interface IDSCloudKitKeyValueStore : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) IDSCKContainer container;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (void)setData:forKey:completion:;
- (id)initWithContainer:queue:;
- (void)fetchDataForKey:completion:;
- (void)fetchObjectForKey:completion:;
- (void)setObject:forKey:completion:;
@end

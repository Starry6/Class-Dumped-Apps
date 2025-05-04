@interface AWEDitoNetworkImpl : NSObject
@property (nonatomic) NSMutableSet chunkTaskSet;
@property (nonatomic) TTNetworkManager networkManager;
@property (nonatomic) <AWEDitoNetworkImplDataSource> dataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setNetworkManager:;
- (id)networkManager;
- (void)networkWithURL:method:params:completion:;
- (void)networkWithURL:method:headers:params:completion:;
- (void)networkWithURL:params:completion:;
- (void)networkByChunkModeWithURL:method:headers:params:completion:;
- (void)removeChunkTask:;
- (id)chunkTaskSet;
- (void)setChunkTaskSet:;
- (id)init;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
@end

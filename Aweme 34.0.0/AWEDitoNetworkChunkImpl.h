@interface AWEDitoNetworkChunkImpl : NSObject
@property (nonatomic) NSMutableSet chunkTaskSet;
@property (nonatomic) TTNetworkManager networkManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setNetworkManager:;
- (id)networkManager;
- (void)networkByChunkModeWithURL:method:headers:params:completion:;
- (void)removeChunkTask:;
- (id)chunkTaskSet;
- (void)networkByChunkModeWithURL:params:completion:;
- (void)networkByChunkModeWithURL:method:params:completion:;
- (void)setChunkTaskSet:;
- (id)init;
- (void).cxx_destruct;
@end

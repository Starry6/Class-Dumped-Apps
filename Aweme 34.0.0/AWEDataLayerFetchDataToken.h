@interface AWEDataLayerFetchDataToken : NSObject
@property (nonatomic) NSString tokenId;
@property (nonatomic) q currentState;
@property (nonatomic) NSString dependencyTokenId;
- (void)setTokenId:;
- (id)dependencyTokenId;
- (void)setDependencyTokenId:;
- (void)updateState:;
- (void)setCurrentState:;
- (id)init;
- (BOOL)isCancelled;
- (void)cancel;
- (long long)currentState;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)addDependency:;
- (id)tokenId;
@end

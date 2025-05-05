@interface IESECGoodsFeedPitayaManager : NSObject
@property (nonatomic) BOOL hasAddPitayaReadyObserver;
@property (nonatomic) NSMutableArray observeBlocks;
- (BOOL)hasAddPitayaReadyObserver;
- (id)observeBlocks;
- (void)registerKey:Handler:;
- (void)setHasAddPitayaReadyObserver:;
- (void)setObserveBlocks:;
- (void).cxx_destruct;
@end

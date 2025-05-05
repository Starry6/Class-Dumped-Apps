@interface IESECLLDCSimpleLynxCard : NSObject
@property (nonatomic) NSMutableArray lynxContainers;
@property (nonatomic) PuzzleHybridContainer currentContainer;
@property (nonatomic) IESHYHybridContainerConfig config;
@property (nonatomic) IESECLLDCLynxManager delegate;
@property (nonatomic) BOOL canReload;
- (id)getPuzzleHybridContainer;
- (id)initWithConfig:delegate:canReload:;
- (id)lynxContainers;
- (void)setCanReload:;
- (void)setCurrentContainer:;
- (void)setLynxContainers:;
- (void)reload;
- (void)setConfig:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)canReload;
- (id)config;
- (id)currentContainer;
@end

@interface PuzzlePrefetchLoadParam : NSObject
@property (nonatomic) NSArray configJsons;
@property (nonatomic) BOOL ignoreCache;
@property (nonatomic) BOOL pbModeEnable;
@property (nonatomic) NSArray pbConfigModels;
@property (nonatomic) NSArray latchJsonChannels;
@property (nonatomic) NSArray latchJsons;
@property (nonatomic) NSArray latchJsonCosts;
- (void)setConfigJsons:;
- (id)configJsons;
- (id)latchJsonChannels;
- (id)latchJsonCosts;
- (id)latchJsons;
- (id)pbConfigModels;
- (BOOL)pbModeEnable;
- (void)setLatchJsonChannels:;
- (void)setLatchJsonCosts:;
- (void)setLatchJsons:;
- (void)setPbConfigModels:;
- (void)setPbModeEnable:;
- (BOOL)ignoreCache;
- (void).cxx_destruct;
- (void)setIgnoreCache:;
@end

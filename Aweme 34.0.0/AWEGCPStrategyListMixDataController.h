@interface AWEGCPStrategyListMixDataController : AWEListDataController
@property (nonatomic) IESGCPPlayerTransitionContext context;
@property (nonatomic) q indexOfMix;
@property (nonatomic) q firstIndexInMixOfData;
- (id)getMixModelsWithStrategyArray:mixId:currentIndex:;
- (void)setFirstIndexInMixOfData:;
- (long long)indexOfMix;
- (void)setIndexOfMix:;
- (id)initWithDataManager:mixId:index:;
- (id)initWithGCPAwemeModels:mixId:index:;
- (long long)firstIndexInMixOfData;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end

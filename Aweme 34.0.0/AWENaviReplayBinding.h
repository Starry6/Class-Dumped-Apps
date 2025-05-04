@interface AWENaviReplayBinding : AWEBinding
@property (nonatomic) NSMutableArray recentDatas;
@property (nonatomic) @ observingObject;
@property (nonatomic) Q capacity;
- (void)deliverToObject:withValue:;
- (id)initWithReplayCount:;
- (id)recentDatas;
- (id)observingObject;
- (void)setRecentDatas:;
- (void)setObservingObject:;
- (id)init;
- (void)setCapacity:;
- (unsigned long long)capacity;
- (void).cxx_destruct;
- (void)addHandler:;
@end

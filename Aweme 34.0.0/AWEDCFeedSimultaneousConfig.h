@interface AWEDCFeedSimultaneousConfig : AWEDCFeedBaseConfig
@property (nonatomic) BOOL enable;
@property (nonatomic) Q simultaneousType;
@property (nonatomic) @? simultaneousOffset;
@property (nonatomic) @? transitionStartViewForOffset;
- (void)setupDefaultConfig;
- (unsigned long long)simultaneousType;
- (void)setSimultaneousType:;
- (id)simultaneousOffset;
- (void)setSimultaneousOffset:;
- (id)transitionStartViewForOffset;
- (void)setTransitionStartViewForOffset:;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
@end

@interface AWELivePreCardScrollAnimationView : UIView
@property (nonatomic) NSMutableArray scrollLines;
@property (nonatomic) q maxCount;
- (void)removeAnimation;
- (void)reloadWith:;
- (id)scrollLines;
- (void)setScrollLines:;
- (void)setMaxCount:;
- (long long)maxCount;
- (void)play;
- (id)initWithMaxCount:;
- (void).cxx_destruct;
- (void)setupUI;
@end

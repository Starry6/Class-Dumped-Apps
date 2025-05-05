@interface TTVideoEnginePlayerViewWrapper : NSObject
@property (nonatomic) Q type;
@property (nonatomic) UIView playerView;
@property (nonatomic) TTVideoEngineLogView debugView;
- (void)setPlayerView:;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)playerView;
- (id)initWithType:;
- (id)debugView;
- (void)setDebugView:;
@end

@interface AWEUGSceneBaseListener : NSObject
@property (nonatomic) <AWEUGSceneStrategyProtocol> strategy;
- (void)bindStrategy:;
- (id)strategy;
- (void)statusDidChange:;
- (void).cxx_destruct;
- (void)setStrategy:;
@end

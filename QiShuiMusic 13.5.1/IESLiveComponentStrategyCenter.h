@interface IESLiveComponentStrategyCenter : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL supportComponentLoadPriority;
- (long long)componentLoadStrategyWithLevel:;
- (id)componentCreateConfig;
- (BOOL)componentCreateEnable;
- (double)componentCreateLoopMaxTime;
- (long long)componentCreateLoopNumber;
- (long long)componentCreateStrategy;
- (BOOL)componentLoadEnableWithLevel:;
- (double)componentLoadLoopMaxTimeWithLevel:;
- (long long)componentLoadLoopNumberWithLevel:;
- (BOOL)componentLoadPriorityEanble;
- (id)configWithLevel:;
- (BOOL)enableWithTraversal;
- (id)p01ComponentLoadConfig;
- (id)p23ComponentLoadConfig;
- (void)setSupportComponentLoadPriority:;
- (BOOL)supportComponentLoadPriority;
- (BOOL)enable;
- (id)init;
- (void)setEnable:;
@end

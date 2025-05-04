@interface AWEGCPStrategyWidget : IESGCPBaseWidget
@property (nonatomic) BOOL liveMutedBeforeEnterFeed;
@property (nonatomic) BOOL mute;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didEnterInnerFeed;
- (void)didOutInnerFeed;
- (void)openStrategyDetailViewControllerWith:;
- (void)widgetBindService;
- (void)setLiveMutedBeforeEnterFeed:;
- (BOOL)liveMutedBeforeEnterFeed;
- (void)openViewController:;
- (BOOL)mute;
- (void)dealloc;
- (void)setMute:;
@end

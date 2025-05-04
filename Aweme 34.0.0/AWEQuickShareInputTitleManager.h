@interface AWEQuickShareInputTitleManager : NSObject
@property (nonatomic) <AWEShareToStoryModelProtocol> storyModel;
@property (nonatomic) NSDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (id)panelTitle;
- (void)showInputViewWithStoryModel:trackParams:cover:completion:;
- (void)showIronManInputViewWithStoryModel:trackParams:cover:completion:;
- (void)showInputViewWithLiveStoryModel:trackParams:cover:completion:;
- (void).cxx_destruct;
- (void)setStoryModel:;
- (id)storyModel;
+ (id)sharedManager;
@end

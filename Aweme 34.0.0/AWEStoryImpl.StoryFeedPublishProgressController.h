@interface AWEStoryImpl.StoryFeedPublishProgressController : AWEStoryKit.StoryKitBaseController
@property (nonatomic) q publishProgressContainerType;
@property (nonatomic) UIView publishProgressContainerView;
@property (nonatomic) UIView<AWEPublishProgressViewProtocol> progressView;
- (long long)publishProgressContainerType;
- (id)publishProgressContainerView;
- (void)publishProgressViewDidBeginPublish;
- (void)publishProgressViewDidEndPublish;
- (id)init;
- (id)progressView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)setProgressView:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
@end

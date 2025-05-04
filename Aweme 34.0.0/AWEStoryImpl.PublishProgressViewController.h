@interface AWEStoryImpl.PublishProgressViewController : AWEStoryImpl.StoryListBaseController
@property (nonatomic) UIView<AWEPublishProgressViewProtocol> progressView;
@property (nonatomic) q publishProgressContainerType;
@property (nonatomic) UIView publishProgressContainerView;
- (id)referString;
- (long long)publishProgressContainerType;
- (id)publishProgressContainerView;
- (id)init;
- (id)progressView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)setProgressView:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
@end

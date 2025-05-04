@interface AWEMultiAccountInnerNotificationConfig : DUXInAppNotificationConfig
@property (nonatomic) @? viewWillAppearBlock;
@property (nonatomic) @? viewDidAppearBlock;
@property (nonatomic) @? viewWillDisAppearBlock;
@property (nonatomic) @? viewDidDisAppearBlock;
@property (nonatomic) @? viewDidTapBlock;
@property (nonatomic) BOOL disablePullIndicatorView;
- (BOOL)disablePullIndicatorView;
- (void)setViewWillAppearBlock:;
- (id)viewWillAppearBlock;
- (void)setViewDidTapBlock:;
- (void)setViewDidDisAppearBlock:;
- (void)setDisablePullIndicatorView:;
- (id)viewWillDisAppearBlock;
- (void)setViewWillDisAppearBlock:;
- (id)viewDidDisAppearBlock;
- (id)viewDidTapBlock;
- (void).cxx_destruct;
- (void)setViewDidAppearBlock:;
- (id)viewDidAppearBlock;
@end

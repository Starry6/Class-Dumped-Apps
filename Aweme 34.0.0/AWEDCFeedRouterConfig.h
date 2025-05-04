@interface AWEDCFeedRouterConfig : AWEDCFeedBaseConfig
@property (nonatomic) UINavigationController navigationController;
@property (nonatomic) @? routerDecideBlock;
@property (nonatomic) @? albumInsInnerPayloadConfigBlock;
@property (nonatomic) @? innerViewControllerConfigBlock;
@property (nonatomic) @? detailVCDefaultStartSeekTimeBlock;
- (void)setRouterDecideBlock:;
- (void)setInnerViewControllerConfigBlock:;
- (void)setupDefaultConfig;
- (id)routerDecideBlock;
- (id)albumInsInnerPayloadConfigBlock;
- (void)setAlbumInsInnerPayloadConfigBlock:;
- (id)innerViewControllerConfigBlock;
- (id)detailVCDefaultStartSeekTimeBlock;
- (void)setDetailVCDefaultStartSeekTimeBlock:;
- (void)setNavigationController:;
- (void).cxx_destruct;
- (id)navigationController;
@end

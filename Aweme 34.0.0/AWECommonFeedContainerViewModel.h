@interface AWECommonFeedContainerViewModel : AWEBaseListViewModel
@property (nonatomic) <AWECommonFeedConfigProtocol> configManager;
- (void)updateConfigManager:;
- (id)generateSectionViewModelsByFeedCardModels:;
- (id)findSectionViewModelsByFeedCardModels:;
- (id)generateSectionViewModelByFeedCardModel:;
- (id)findSectionViewModelByFeedCardModel:;
- (void).cxx_destruct;
- (id)configManager;
- (void)setConfigManager:;
@end

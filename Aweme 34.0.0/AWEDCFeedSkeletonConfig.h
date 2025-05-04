@interface AWEDCFeedSkeletonConfig : AWEDCFeedBaseConfig
@property (nonatomic) @? createSkeletonSectionViewModelsBlock;
@property (nonatomic) @? isShowingSkeletonBlock;
@property (nonatomic) AWEDCFeedSkeletonUIConfig uiConfig;
- (id)uiConfig;
- (void)setUiConfig:;
- (id)createSkeletonSectionViewModelsBlock;
- (void)setCreateSkeletonSectionViewModelsBlock:;
- (id)isShowingSkeletonBlock;
- (void)setIsShowingSkeletonBlock:;
- (id)init;
- (void).cxx_destruct;
@end

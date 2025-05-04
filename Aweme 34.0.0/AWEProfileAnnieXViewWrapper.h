@interface AWEProfileAnnieXViewWrapper : AWEProfileHybridContainerBaseWrapper
@property (nonatomic) UIView<AnnieXContainerBaseProtocol> annieXView;
- (void)sendEvent:params:;
- (id)annieXView;
- (id)__configSchemaAddExtraParamsWithSourceSchema:;
- (id)getAnnieXLiveCardWithLynxSchema:scrollViewHeight:containerWidth:;
- (void)setAnnieXView:;
- (id)getAnnieXBulletCardWithLynxSchema:scrollViewHeight:containerWidth:;
- (void)handleAnnieXCardModelWithModel:lynxSchema:scrollViewHeight:containerWidth:;
- (void)configHybridViewWithContainerWidth:;
- (id)findScrollViewWithName:;
- (void)onThemeChangeNotificationAction:;
- (void)hybridLayoutSubviewsWithContainerWidth:callBack:;
- (void)stopLoading;
- (void).cxx_destruct;
@end

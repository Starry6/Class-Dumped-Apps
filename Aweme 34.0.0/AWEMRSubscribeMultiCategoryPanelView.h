@interface AWEMRSubscribeMultiCategoryPanelView : AWEMRSubscribeBasePanelView
@property (nonatomic) q switchCount;
@property (nonatomic) NSArray optionViews;
- (void)setupContainerView;
- (void)setOptionViews:;
- (id)optionViews;
- (double)containerViewTopInset;
- (double)containerViewBottomInset;
- (id)initWithSwitchCount:;
- (void).cxx_destruct;
- (void)setSwitchCount:;
- (long long)switchCount;
@end

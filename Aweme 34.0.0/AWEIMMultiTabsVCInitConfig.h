@interface AWEIMMultiTabsVCInitConfig : NSObject
@property (nonatomic) BOOL shouldAutomaticallyAdjustsScrollViewInsets;
@property (nonatomic) BOOL disablePanScrollFunction;
@property (nonatomic) BOOL enableTabTapAnimationFunction;
@property (nonatomic) Q pageUIStandard;
@property (nonatomic) BOOL needCustomNaviBar;
@property (nonatomic) NSString customNaviBarLeftItemTitle;
@property (nonatomic) Q naviBarButtonPresetStyle;
@property (nonatomic) BOOL useTabbarViewAsNaviBarTitle;
- (unsigned long long)pageUIStandard;
- (void)setPageUIStandard:;
- (BOOL)shouldAutomaticallyAdjustsScrollViewInsets;
- (void)setShouldAutomaticallyAdjustsScrollViewInsets:;
- (BOOL)disablePanScrollFunction;
- (void)setDisablePanScrollFunction:;
- (BOOL)enableTabTapAnimationFunction;
- (void)setEnableTabTapAnimationFunction:;
- (BOOL)needCustomNaviBar;
- (void)setNeedCustomNaviBar:;
- (id)customNaviBarLeftItemTitle;
- (void)setCustomNaviBarLeftItemTitle:;
- (unsigned long long)naviBarButtonPresetStyle;
- (void)setNaviBarButtonPresetStyle:;
- (BOOL)useTabbarViewAsNaviBarTitle;
- (void)setUseTabbarViewAsNaviBarTitle:;
- (void).cxx_destruct;
@end

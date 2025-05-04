@interface AWELiveHotPointPanelViewController : AWEHotPointPanelViewController
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) AWELiveHotPointPanelTableViewController liveHotVC;
@property (nonatomic) UIView separateLine;
@property (nonatomic) BOOL cellEnableClick;
- (id)panelViewController;
- (id)separateLine;
- (void)setSeparateLine:;
- (BOOL)shouldShowHotWordsRecommend;
- (void)doSpecificUIConfig;
- (double)totalPanelViewHeight;
- (void)setCellEnableClick:;
- (BOOL)cellEnableClick;
- (id)liveHotVC;
- (void)setLiveHotVC:;
- (double)titleHeight;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)setBackgroundImageView:;
- (double)containerHeight;
@end

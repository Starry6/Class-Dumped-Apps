@interface AWEPlayDanmakuInputContainView : UIView
@property (nonatomic) UIButton danmakuInputButton;
@property (nonatomic) UIButton inputGuideButton;
@property (nonatomic) BOOL isShowGuideButton;
@property (nonatomic) @? inputClickBlock;
@property (nonatomic) BOOL guideFromColdLaunch;
- (void)layoutSubviews;
- (void)configSubViews;
- (id)danmakuInputButton;
- (void)setDanmakuInputButton:;
- (id)inputGuideButton;
- (void)setIsShowGuideButton:;
- (id)inputClickBlock;
- (void)handleInputButtonClick;
- (void)handleInputGuideButtonClick;
- (void)setInputGuideButton:;
- (BOOL)isShowGuideButton;
- (void)setInputClickBlock:;
- (BOOL)guideFromColdLaunch;
- (void)setGuideFromColdLaunch:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end

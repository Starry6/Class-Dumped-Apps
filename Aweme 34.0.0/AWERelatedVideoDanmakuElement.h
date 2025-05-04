@interface AWERelatedVideoDanmakuElement : AWERelatedVideoPlayBaseElement
@property (nonatomic) UIButton danmakuInputButton;
- (void)initializeElement;
- (void)bindEvent;
- (id)danmakuInputButton;
- (void)updateDanmakuButton;
- (BOOL)shouldShowDanmakuButton;
- (void)setDanmakuInputButton:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end

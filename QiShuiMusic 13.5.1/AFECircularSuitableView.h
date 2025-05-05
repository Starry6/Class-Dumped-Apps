@interface AFECircularSuitableView : AFECircularView
@property (nonatomic) AFECloseBtn closeBtn;
@property (nonatomic) UIButton playBtn;
- (void)addView;
- (void)setPlayBtnIcon:;
- (id)playBtn;
- (void)setSize;
- (id)closeBtn;
- (void)onButtonCancel;
- (void)setCloseBtn:;
- (void)setPlayBtn:;
- (void)setScreenRotation:;
- (void)play:;
- (void)_updateView;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end

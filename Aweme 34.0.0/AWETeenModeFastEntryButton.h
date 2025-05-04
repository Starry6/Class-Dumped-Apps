@interface AWETeenModeFastEntryButton : UIButton
@property (nonatomic) double animationDuration;
@property (nonatomic) UIView redView;
@property (nonatomic) BOOL shouldFitBigFont;
@property (nonatomic) BOOL teenModeEnable;
- (id)redView;
- (void)setRedView:;
- (id)initWithFrame:andTeenMode:shouldFitBigFont:;
- (double)bigFontAutoLength:;
- (void)setButtonContentWithTeenMode:;
- (void)setButtonWithIconOnlyWithImageSize:;
- (BOOL)teenModeEnable;
- (BOOL)shouldFitBigFont;
- (void)setButtonWithTextOnly;
- (id)initWithFrame:andTeenMode:;
- (BOOL)isShowingRedViewForFastEntry;
- (void)setButtonWithIconOnly;
- (void)setShouldFitBigFont:;
- (void)setTeenModeEnable:;
- (void)setHighlighted:;
- (void).cxx_destruct;
- (void)setAnimationDuration:;
- (double)animationDuration;
@end

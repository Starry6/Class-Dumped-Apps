@interface IESLiveSaaSStreamClarityButtonView : UIView
@property (nonatomic) @? onclickBlock;
@property (nonatomic) IESLiveSaaSGradientBackgroundView selectedGradientView;
@property (nonatomic) UIButton button;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addHighResolutionTagToButtonIsLandscape:;
- (void)addTag:toButtonIsLandscape:;
- (void)buttonClicked:;
- (id)initWithFrame:title:onclickBlock:;
- (id)initWithFrameForFHD:onclickBlock:;
- (id)onclickBlock;
- (id)selectedGradientView;
- (void)setDisable:;
- (void)setOnclickBlock:;
- (void)setSelectedGradientView:;
- (void)setupUIWithTitle:;
- (void)setupWithFHD;
- (void)showSelectedGradientView:;
- (void)setSelected:;
- (BOOL)isSelected;
- (id)button;
- (void).cxx_destruct;
- (void)setButton:;
+ (id)buildPlaybackResolutionButtonViewWithSelected:title:shouldShowHighResolutionTag:;
+ (id)buildResolutionLevelButton:isFHD:onclickBlock:;
@end

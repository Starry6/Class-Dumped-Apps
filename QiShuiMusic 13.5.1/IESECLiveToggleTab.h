@interface IESECLiveToggleTab : UIView
@property (nonatomic) NSMutableArray toggleTabElements;
@property (nonatomic) UIView sliderView;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) IESECLiveToggleModel toggleModel;
@property (nonatomic) <IESECLiveToggleTabDelegate> delegate;
- (void)setToggleModel:;
- (void)clickToggleTabElement:;
- (id)initWithToggleModel:;
- (BOOL)isSliding;
- (void)scrollDidScrollToPercent:;
- (void)setIsSliding:;
- (void)setToggleTabElements:;
- (id)toggleModel;
- (id)toggleTabElements;
- (void)setDelegate:;
- (void)setSliderView:;
- (id)sliderView;
- (id)delegate;
- (void)setIndex:;
- (void).cxx_destruct;
- (void)setupUI;
@end

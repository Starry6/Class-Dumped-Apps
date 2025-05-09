@interface AWEGrouponLifeFeedsBaseComponentView : UIView
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) UILongPressGestureRecognizer longPressGesture;
@property (nonatomic) <AWEGrouponLifeFeedsBaseComponentViewPrivateDelegate> private_delegate;
@property (nonatomic) AWEGrouponLifeFeedsPageContext pageContext;
@property (nonatomic) AWEGrouponLifeFeedsBaseComponentVM viewModel;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)stopPlay;
- (void)startPlay;
- (void)bindViewModel:;
- (id)customTrackParams;
- (void)trackCellClick;
- (void)trackCellShow;
- (id)sceneFromNegativeFeedbackSetting;
- (id)feedbackModelWithLongPress:;
- (void)cellDidScrollDisappearTwoThirds;
- (void)cellDidScrollAppearTwoThirds;
- (BOOL)trackClientShowEnable;
- (BOOL)trackClientClickEnable;
- (void)tryAddTapGesture;
- (void)tryAddLongPressGestureRecognizer;
- (id)buildTrackParams;
- (id)private_delegate;
- (void)longPressGestureAction:;
- (void)trackCellExposure;
- (void)bindActionAndState;
- (void)didClickComponent;
- (void)setPrivate_delegate:;
- (id)feedbackDataWithHeight:;
- (id)hostCardInfoFromBizData:cardType:height:;
- (BOOL)isPlaying;
- (void)prepareForReuse;
- (id)viewModel;
- (id)initWithFrame:;
- (id)identifier;
- (BOOL)canAutoPlay;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)longPressGesture;
- (void)setIsPlaying:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)tapGesture;
- (void)setLongPressGesture:;
- (void)setTapGesture:;
- (void)setPageContext:;
- (id)pageContext;
- (void)tapAction:;
@end

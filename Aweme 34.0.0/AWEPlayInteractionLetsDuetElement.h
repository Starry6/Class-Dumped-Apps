@interface AWEPlayInteractionLetsDuetElement : AWEPlayInteractionBaseActionButtonElement
@property (nonatomic) UIView<AWEFeedGuideRedButtonViewProtocol> letsDuetView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (BOOL)shouldActivateButtonWithData:;
- (id)letsDuetView;
- (void)onLetsDuetViewClicked;
- (BOOL)shouldShowLetsDuet;
- (void)updateLetsDuetView;
- (void)setLetsDuetView:;
- (void)viewDidLoad;
- (void).cxx_destruct;
+ (id)activateInfoWithContext:;
+ (BOOL)shouldActiveWithModel:context:;
@end

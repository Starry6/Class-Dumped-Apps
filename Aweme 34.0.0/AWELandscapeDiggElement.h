@interface AWELandscapeDiggElement : AWELandscapeInteractionBaseElement
@property (nonatomic) AWELandScapeLikeButton likeButton;
@property (nonatomic) AWELandscapeDiggElementViewModel viewModel;
@property (nonatomic) {CGPoint=dd} doubleTapLocation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateDiggCount;
- (void)announceAccessibilityMsg:;
- (void)exitLandscapeWithCompletion:;
- (id)doubleTapLocation;
- (void)handleLikeButtonTap;
- (void)playDoubleTapLikeAnimation;
- (void)setDoubleTapLocation:;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setData:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)likeButton;
- (void)setLikeButton:;
@end

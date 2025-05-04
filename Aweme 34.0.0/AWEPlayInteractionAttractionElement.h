@interface AWEPlayInteractionAttractionElement : AWEPlayInteractionRightElement
@property (nonatomic) UIButton<AWEAdAttractionView> attractionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_viewWillAppear;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)attractionView;
- (void)setAttractionView:;
- (void)onAttractionViewShowed;
- (void)onAttractionViewTapped:;
- (void)updateAttractionView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
+ (id)activateInfoWithContext:;
+ (BOOL)shouldActiveWithData:;
@end

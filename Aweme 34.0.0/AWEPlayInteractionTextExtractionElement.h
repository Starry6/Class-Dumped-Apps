@interface AWEPlayInteractionTextExtractionElement : AWEPlayInteractionLeftElement
@property (nonatomic) double delayTime;
@property (nonatomic) UIButton extractionButton;
@property (nonatomic) AWEPlayInteractionTextExtractionElementViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (void)viewDidDisposed;
- (void)textExtractionClick;
- (void)animateUnhidden;
- (id)extractionButton;
- (void)hiddenExtraction;
- (void)extractionButtonIsShow:;
- (void)setExtractionButton:;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setDelayTime:;
- (double)delayTime;
+ (id)activateInfoWithContext:;
@end

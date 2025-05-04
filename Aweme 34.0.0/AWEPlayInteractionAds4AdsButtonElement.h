@interface AWEPlayInteractionAds4AdsButtonElement : AWEPlayInteractionLeftElement
@property (nonatomic) @? showHandler;
@property (nonatomic) @? colorHandler;
@property (nonatomic) DUXButton adButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (id)activateInfoWithData:;
- (void)prepareForActivate;
- (id)adButton;
- (void)setAdButton:;
- (id)showHandler;
- (void)setShowHandler:;
- (void)colorButton;
- (id)colorHandler;
- (void)setColorHandler:;
- (void)dislikeAction;
- (void)adAction;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
- (void)showButton;
+ (id)activateInfoWithContext:;
@end

@interface AWEPlayInteractionUnfoldFoldedHotSpotVideoElement : AWEPlayInteractionLeftElement
@property (nonatomic) AWEUnfoldBarView unfoldBar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activateInfoWithData:;
- (void)configureUI;
- (void)selfTapped:;
- (void)viewDidDisposed;
- (void)setUnfoldBar:;
- (id)unfoldBar;
- (void)updateUnfoldBar;
- (BOOL)elementAppearLowPriorityNeedAvoid;
- (void)viewDidLoad;
- (void).cxx_destruct;
+ (BOOL)shouldActiveWithData:context:;
+ (id)activateInfoWithContext:;
@end

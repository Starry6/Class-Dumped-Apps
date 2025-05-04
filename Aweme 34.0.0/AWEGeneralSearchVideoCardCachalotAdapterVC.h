@interface AWEGeneralSearchVideoCardCachalotAdapterVC : AWEGeneralSearchVideoCardViewController
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isActive;
@property (nonatomic) AWESearchAutoPlayHandler autoPlayHandler;
- (void)componentWillDisplay;
- (id)autoPlayHandler;
- (void)setAutoPlayHandler:;
- (BOOL)shouldNotActive;
- (void)didBecomeActive;
- (BOOL)hasVideo;
- (void)setIsActive:;
- (id)viewModel;
- (void)didResignActive;
- (void)setViewModel:;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)componentView;
- (id)activeView;
- (void)updateWithViewModel:;
+ (id)sizeWithViewModel:width:;
@end

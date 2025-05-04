@interface AWEPlayInteractionlivePalletElement : AWEPlayInteractionLeftElement
@property (nonatomic) UIView<CMCLivePalletView> livePalletView;
@property (nonatomic) NSString successStatus;
@property (nonatomic) NSString failReason;
@property (nonatomic) BOOL hasRequestLiveInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)updateLivePalletView;
- (void)updateHasRequestLiveInfo;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)splashDidClicked:;
- (void)setHasRequestLiveInfo:;
- (id)livePalletView;
- (void)setSuccessStatus:;
- (BOOL)hasRequestLiveInfo;
- (void)onLivePalletClicked;
- (void)setLivePalletView:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
- (id)successStatus;
- (id)failReason;
- (void)setFailReason:;
+ (id)activateInfoWithContext:;
@end

@interface AWEPhotoAggregateLoadingViewController : UIViewController
@property (nonatomic) Q status;
@property (nonatomic) AWEPhotoLoadingStyleConfig config;
@property (nonatomic) APCDTOComposerApi apiModel;
@property (nonatomic) UIImageView backImageView;
@property (nonatomic) UIButton backBtn;
@property (nonatomic) UIView redPacketView;
@property (nonatomic) UIButton authorBtn;
@property (nonatomic) UILabel progressLabel;
@property (nonatomic) UILabel progressTitleLabel;
@property (nonatomic) UITextView illustrateLabel;
@property (nonatomic) UIView failedView;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL showRedPacket;
@property (nonatomic) <AWEPhotoAggregateLoadingActionDelegate> delegate;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isAppearing;
@property (nonatomic) NSString taskKey;
- (id)backBtn;
- (void)setBackBtn:;
- (void)setBackImageView:;
- (id)backImageView;
- (void)setIsFirstAppear:;
- (id)taskKey;
- (void)setTaskKey:;
- (void)setApiModel:;
- (id)apiModel;
- (void)buildFailedView;
- (id)failedView;
- (void)setFailedView:;
- (void)updateProgressWithNum:;
- (void)clickOnBack;
- (void)clickOnAuthorization;
- (void)setAuthorBtn:;
- (BOOL)showRedPacket;
- (void)setRedPacketView:;
- (void)setIllustrateLabel:;
- (void)setProgressTitleLabel:;
- (void)updateWithLoadingStatus:;
- (void)startAggregateLoading;
- (id)authorBtn;
- (id)redPacketView;
- (id)progressTitleLabel;
- (id)illustrateLabel;
- (void)didCompleteLoading;
- (id)initWithStatus:config:;
- (void)setShowRedPacket:;
- (void)setConfig:;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillDisappear:;
- (id)delegate;
- (void)setStatus:;
- (id)config;
- (void)viewDidLoad;
- (BOOL)textView:shouldInteractWithURL:inRange:interaction:;
- (BOOL)isAppearing;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)setIsAppearing:;
- (unsigned long long)status;
- (void)viewDidAppear:;
- (void)setDelegate:;
- (BOOL)isFirstAppear;
- (id)progressLabel;
- (void)setProgressLabel:;
- (id)dismissBlock;
- (void)setDismissBlock:;
+ (id)gradientLayerWithColors:startPoint:endPoint:locations:bounds:;
@end

@interface AWEUnPaidVideoProductDetailPresenter : AWEVideoPaymentBasePresenter
@property (nonatomic) NSString containerID;
@property (nonatomic) double timeStamp;
@property (nonatomic) AWEAwemeModel currentModel;
@property (nonatomic) AWEVideoProductDetailView detailView;
@property (nonatomic) NSString referString;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) AWEPaymentEventHandler eventHandler;
@property (nonatomic) AWEPaymentRepurchaseTracker repurchaseTracker;
@property (nonatomic) AWEPaymentRepurchaseModel repurchaseModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setReferString:;
- (void)setLogExtra:;
- (id)logExtra;
- (BOOL)isPreviewVideo;
- (void)updateLogExtra:;
- (void)trackWithEvent:params:;
- (double)currentPlayProgress;
- (void)handlePayEvent:;
- (id)trackParameters;
- (id)getRecType:;
- (void)checkVideoShouldUnlock:;
- (void)configDetailView;
- (BOOL)shouldShowViewWithPeriod:;
- (BOOL)shouldAnimateWhenShown;
- (BOOL)shouldAnimateWhenHidden;
- (id)initWithView:model:referString:logExtra:context:;
- (BOOL)shouldCheckViewStatusWhenDisplay;
- (void)checkVideoShouldUnlockIfNeed;
- (void)didClickBuyButton;
- (void)hasShownView;
- (void)didClickRepurchaseButton:;
- (id)repurchaseModel;
- (id)bizTypeIdentifier;
- (void)setRepurchaseModel:;
- (id)buySchemaParameters;
- (id)repurchaseTracker;
- (void)setRepurchaseTracker:;
- (void)updateButtonInfo;
- (void)updateDetailViewWithNewModel:;
- (void)updateRepurchaseButtonStatus;
- (BOOL)shouldShowReserveView;
- (void)updateRepurchaseViewWithModel:;
- (void)didClickIAAUnlockButton;
- (void)dealloc;
- (void)setContainerID:;
- (void)setEventHandler:;
- (id)containerID;
- (void).cxx_destruct;
- (id)eventHandler;
- (double)timeStamp;
- (void)setTimeStamp:;
- (id)currentModel;
- (id)detailView;
- (void)setDetailView:;
- (void)addObservers;
- (id)bizID;
- (void)setCurrentModel:;
- (id)currentEpisode;
+ (BOOL)shouldActiveWithData:referString:logExtra:;
@end

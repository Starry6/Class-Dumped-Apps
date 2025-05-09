@interface AWEASyncQueueViewController : UIViewController
@property (nonatomic) UIImageView bgView;
@property (nonatomic) UIImageView orignImageView;
@property (nonatomic) ACCAnimatedButton backButton;
@property (nonatomic) ACCAnimatedButton bottomButton;
@property (nonatomic) UILabel queueStatusLable;
@property (nonatomic) UILabel queueContentLable;
@property (nonatomic) q viewType;
@property (nonatomic) q currentvViewType;
@property (nonatomic) NSString shootWay;
@property (nonatomic) AWERepoAIGCSyncModel aigcModel;
@property (nonatomic) UIView<_TtP9AWELottie13AWELottieView_> guideAnimationView;
@property (nonatomic) q loadingType;
@property (nonatomic) UILabel headLineLabel;
@property (nonatomic) DUXLoadingCircleView loadingView;
@property (nonatomic) UILabel bottomLabel;
@property (nonatomic) UIView guidBackGroupUIView;
@property (nonatomic) YYLabel keywordsLabel;
@property (nonatomic) NSString shootEnterFrom;
@property (nonatomic) NSString currentTaskId;
@property (nonatomic) q currentTaskType;
@property (nonatomic) double lessResidueTimeNeedToQuery;
@property (nonatomic) double queryInterval;
@property (nonatomic) double currentWaitTime;
@property (nonatomic) BOOL appDidBecomeBackGround;
@property (nonatomic) BOOL vcWillDismiss;
@property (nonatomic) BOOL updateFromLoopRequest;
@property (nonatomic) double enterPageStartTime;
@property (nonatomic) BOOL enterFromDraftBox;
@property (nonatomic) NSDictionary commonDictionary;
@property (nonatomic) NSString headLineTitle;
@property (nonatomic) q generateAIType;
@property (nonatomic) @? finishBlock;
@property (nonatomic) @? backBlock;
- (void)setShootWay:;
- (void)setShootEnterFrom:;
- (id)shootWay;
- (double)queryInterval;
- (long long)loadingType;
- (void)setLoadingType:;
- (id)shootEnterFrom;
- (void)setBackBlock:;
- (id)backBlock;
- (id)keywordsLabel;
- (void)setKeywordsLabel:;
- (void)handleApplicationDidBecomeActive;
- (id)guideAnimationView;
- (void)setGuideAnimationView:;
- (id)currentTaskId;
- (double)calculateLabelHeightWithLabel:;
- (id)initWithLoadingType:;
- (void)updateCurrentPageTaskId:taskType:;
- (void)setEnterFromDraftBox:;
- (void)updateOrignImageViewWithImage:;
- (void)updateKeywordsLabelWithText:;
- (void)updateSyncQueueType:withStatusLabel:subTitleText:withBottomText:withWaitTime:repoAIGCSyncModel:shootWay:enterFrom:withfailText:;
- (void)setHeadLineTitle:;
- (void)setGenerateAIType:;
- (void)layoutCustomSubview;
- (void)updateSyncQueuebottomButtonWithTime:;
- (void)startDelayQueryTask;
- (void)p_backClicked:;
- (void)setCommonDictionary:;
- (long long)currentvViewType;
- (void)setCurrentTaskId:;
- (void)setLessResidueTimeNeedToQuery:;
- (void)setQueryInterval:;
- (void)handleReceiveUpdateDraftDownWith:;
- (void)setVcWillDismiss:;
- (void)setAppDidBecomeBackGround:;
- (void)setUpdateFromLoopRequest:;
- (void)setEnterPageStartTime:;
- (void)addCustomSubView;
- (void)queryCurrentTask;
- (id)orignImageView;
- (id)guidBackGroupUIView;
- (id)queueStatusLable;
- (id)queueContentLable;
- (id)headLineLabel;
- (id)aigcModel;
- (void)trackerAsyncQueuePage:clickType:repoAIGCSyncModel:;
- (double)enterPageStartTime;
- (double)calculateLabelWithWithLabel:;
- (void)setCurrentvViewType:;
- (void)setAigcModel:;
- (void)updateKeyWordsListShowStatus:;
- (BOOL)updateFromLoopRequest;
- (void)trackerAsyncQueuePage:repoAIGCSyncModel:;
- (BOOL)appDidBecomeBackGround;
- (double)currentWaitTime;
- (double)lessResidueTimeNeedToQuery;
- (long long)generateAIType;
- (BOOL)enterFromDraftBox;
- (BOOL)vcWillDismiss;
- (void)monitorAIGCQueryTaskListWithStatus:errorCode:errorMessage:;
- (void)monitorAIGCQueryTaskResultWithStatus:errorCode:errorMessage:taskID:serverTaskID:scene:isMultiLora:multiLoraProfileNum:;
- (void)closeSelfWithCompletion:;
- (void)p_bottomClicked:;
- (id)getTrackPage:;
- (id)commonDictionary;
- (id)getCountDownShowTimeTextWithoutHours:showDraftTipsMsg:;
- (id)headLineTitle;
- (void)setOrignImageView:;
- (void)setQueueStatusLable:;
- (void)setQueueContentLable:;
- (void)setHeadLineLabel:;
- (void)setGuidBackGroupUIView:;
- (void)setCurrentWaitTime:;
- (id)backButton;
- (void)viewWillDisappear:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (void)setBackButton:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)handleApplicationDidEnterBackground;
- (long long)viewType;
- (id)bgView;
- (void)setBgView:;
- (void)setViewType:;
- (long long)currentTaskType;
- (void)setCurrentTaskType:;
- (void)setBottomLabel:;
- (id)bottomLabel;
- (void)setFinishBlock:;
- (id)finishBlock;
- (id)bottomButton;
- (void)setBottomButton:;
@end

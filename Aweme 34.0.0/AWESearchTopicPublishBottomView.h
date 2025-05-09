@interface AWESearchTopicPublishBottomView : UIView
@property (nonatomic) UILabel leftTitleLabel;
@property (nonatomic) UIImageView leftIconView;
@property (nonatomic) UILabel leftDescLabel;
@property (nonatomic) UILabel rightCollectionBtnText;
@property (nonatomic) UIImageView rightCollectionBtn;
@property (nonatomic) UIImageView rightPublishBtn;
@property (nonatomic) UILabel rightPublishBtnText;
@property (nonatomic) AWESearchFavoriteImageView rightCollectionStarImg;
@property (nonatomic) AWEAwemeModel currentAwemeModel;
@property (nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> barContext;
@property (nonatomic) AWESearchDecoratorInnerFlowTopicBottomViewPublishContext context;
@property (nonatomic) BDXBridgeEventSubscriber topicFavoriteStateSubscriber;
- (id)currentAwemeModel;
- (void)configureUI;
- (void)setCurrentAwemeModel:;
- (id)leftIconView;
- (void)setLeftIconView:;
- (void)setBarContext:;
- (id)barContext;
- (void)registerListeners;
- (id)leftTitleLabel;
- (void)setLeftTitleLabel:;
- (void)unregisterListensers;
- (id)rightCollectionStarImg;
- (void)updateCollectionBtnText:;
- (void)setTopicFavoriteStateSubscriber:;
- (id)topicFavoriteStateSubscriber;
- (void)configureUITypeWithTitle;
- (void)configureUITypeWithOnlyButton;
- (id)rightPublishBtn;
- (id)rightPublishBtnText;
- (id)rightCollectionBtn;
- (id)leftDescLabel;
- (id)rightCollectionBtnText;
- (void)onBindContext;
- (id)paramContext;
- (void)onRightCollectionButtonClicked;
- (void)onRightPublishButtonClicked;
- (void)bindContext:andAwemeModel:withBarContext:;
- (void)onCellWillDisplay;
- (void)setLeftDescLabel:;
- (void)setRightCollectionBtnText:;
- (void)setRightCollectionBtn:;
- (void)setRightPublishBtn:;
- (void)setRightPublishBtnText:;
- (void)setRightCollectionStarImg:;
- (void)dealloc;
- (id)initWithFrame:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (double)viewHeight;
@end

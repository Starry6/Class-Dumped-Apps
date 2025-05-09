@interface AWELandscapeChapterPanelController : AWELandscapeInteractionBaseController
@property (nonatomic) UIView dismissView;
@property (nonatomic) UIView panelContainer;
@property (nonatomic) UIView effectView;
@property (nonatomic) UIViewController<AWEChapterPanelViewControllerProtocol> chapterViewController;
@property (nonatomic) BOOL isShowingChapterPanel;
@property (nonatomic) UITapGestureRecognizer tap;
@property (nonatomic) BOOL isShowingReminder;
@property (nonatomic) q state;
@property (nonatomic) AWEGradientView gradientView;
@property (nonatomic) AWELandscapeChapterEntranceView chapterEntranceView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (id)panelContainer;
- (id)getCurrentPlayedTime;
- (void)jumpToSelectedChapter:;
- (void)didChangeChapterProgressState:;
- (void)businessCustomCloseAction;
- (void)setPanelContainer:;
- (void)hideAllPanels;
- (BOOL)shouldResponseRecognizer:;
- (BOOL)handleResponseGestureRecognizer:;
- (BOOL)isShowingPanel;
- (void)showReminderTips:;
- (void)showChapterPanelWithCompletion:;
- (id)createChapterViewController;
- (void)setChapterViewController:;
- (id)chapterViewController;
- (void)setIsShowingReminder:;
- (BOOL)isShowingReminder;
- (void)handleClickDismissView:;
- (id)chapterEntranceView;
- (void)setChapterEntranceView:;
- (void)trackShowChapterEntranceWithState:;
- (BOOL)isShowingChapterEntrance;
- (void)trackShowChapterEntranceOver;
- (BOOL)isShowingChapterPanel;
- (void)dismissChapterPanel;
- (void)trackClickChapterEntranceWithState:;
- (void)setIsShowingChapterPanel:;
- (void)updateState:;
- (id)gradientView;
- (id)effectView;
- (void)viewDidLoad;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)setEffectView:;
- (long long)state;
- (void)setData:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)setState:;
- (BOOL)isInteracting;
- (void)setDismissView:;
- (id)dismissView;
- (id)tap;
- (void)setTap:;
- (double)panelWidth;
@end

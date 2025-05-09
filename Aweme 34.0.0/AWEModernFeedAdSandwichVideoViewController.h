@interface AWEModernFeedAdSandwichVideoViewController : AWEModernFeedAwemeViewController
@property (nonatomic) UIView<AWEBDARifleView> topRifleView;
@property (nonatomic) UIView<AWEBDARifleView> bottomRifleView;
@property (nonatomic) AWEAdGeneralSearchLynxComponentMonitorContext topLynxTrackContext;
@property (nonatomic) AWEAdGeneralSearchLynxComponentMonitorContext bottomLynxTrackContext;
@property (nonatomic) BOOL isVideoDidBreak;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)rifleView:didChangeIntrinsicContentSize:;
- (void)rifleView:didFinishLoadWithURL:;
- (void)rifleView:didLoadFailedWithURL:error:;
- (void)rifleViewDidConstructJSRuntime:;
- (void)didStartShowing;
- (void)didEndShowing;
- (void)updateSubviewFrames;
- (void)resetLynxView;
- (void)setIsVideoDidBreak:;
- (void)updateLynxViewWithAwemeModel:;
- (id)topRifleView;
- (void)setTopRifleView:;
- (id)bottomRifleView;
- (void)setBottomRifleView:;
- (id)createLynxMonitorContextWithLynxModel:;
- (void)setTopLynxTrackContext:;
- (id)topLynxTrackContext;
- (void)monitorWithContext:eventKey:;
- (void)setBottomLynxTrackContext:;
- (id)bottomLynxTrackContext;
- (void)notifyLynxDisappear;
- (BOOL)isVideoDidBreak;
- (void)lynxViewShowMonitorWithContext:lynxView:;
- (id)topLynxViewComponentModelWithAweme:;
- (id)bottomLynxViewComponentModelWithAweme:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)updateWithModel:;
- (void)_setupUI;
+ (double)modernFeedCellPreferedHeightForModel:width:;
+ (void)__awe__codeRunnerRun___LINE__;
@end

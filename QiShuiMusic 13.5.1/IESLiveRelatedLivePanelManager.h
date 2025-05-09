@interface IESLiveRelatedLivePanelManager : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) NSMutableArray panelTabs;
@property (nonatomic) IESLiveRelatedLivePortraitPanel portraitPanelView;
@property (nonatomic) UIView popuoPanelView;
@property (nonatomic) UIView playerScalePanelView;
@property (nonatomic) Q currentPanelType;
@property (nonatomic) @? dismissHandler;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) @? userInteractAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)closePopupPanel;
- (void)removePanelTab:;
- (void)addPanelTab:;
- (void)closePlayerScalePanel;
- (void)closePortraitPanelAnimation:;
- (void)closeRelatedLivePanel;
- (unsigned long long)currentPanelType;
- (void)didSetAttachingDIContext;
- (void)onCameraWillChangeTo:source:;
- (void)onRoomStyleWillChange:callTrace:;
- (void)openPlayerScalePanel;
- (void)openPopupPanel;
- (void)openPortraitPanel;
- (void)openRelatedLivePanel:dismissCompletion:;
- (id)panelTabs;
- (id)playerScalePanelView;
- (id)popuoPanelView;
- (id)portraitPanelView;
- (void)setCurrentPanelType:;
- (void)setPanelTabs:;
- (void)setPlayerScalePanelView:;
- (void)setPopuoPanelView:;
- (void)setPortraitPanelView:;
- (void)setTrackContext:;
- (void)setUserInteractAction:;
- (void)tr_headerChange:;
- (id)trackContext;
- (void)updateRoom:;
- (id)userInteractAction;
- (void)setDismissHandler:;
- (void).cxx_destruct;
- (id)dismissHandler;
- (id)room;
- (void)setRoom:;
- (id)initWithRoom:;
@end

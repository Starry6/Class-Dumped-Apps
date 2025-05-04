@interface AWEPlayInteractionNewMusicReplaceElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEElementContainer leftContainer;
@property (nonatomic) AWEElementContainer rightContainer;
@property (nonatomic) AWEReplaceMusicReportView replaceMusicView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (unsigned long long)elementVisibleType;
- (id)leftContainer;
- (id)rightContainer;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)setRightContainer:;
- (void)setLeftContainer:;
- (id)replaceMusicView;
- (void)updateReplaceMusicPanelView;
- (void)layoutMusicReplacePanel;
- (void)foldAnimationForMusicReplacePanel;
- (void)setReplaceMusicView:;
- (void)foldReplaceMusicPanel;
- (void)startAudioReplacing;
- (void)addGestureForReplaceMusicPanel;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
@end

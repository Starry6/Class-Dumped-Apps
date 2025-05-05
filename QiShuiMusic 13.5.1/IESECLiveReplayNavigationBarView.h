@interface IESECLiveReplayNavigationBarView : UIView
@property (nonatomic) IESECLiveReplayNewAvatarComponentView avatarView;
@property (nonatomic) UIButton replayCntView;
@property (nonatomic) @? closeHandler;
@property (nonatomic) IESECButton closeButton;
@property (nonatomic) IESECLiveReplayDataStore dataStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)closeHandler;
- (void)dataStoreChanged;
- (id)initWithFrame:dataStore:;
- (id)replayCntView;
- (void)setCloseHandler:;
- (void)setReplayCntView:;
- (void)setDataStore:;
- (id)dataStore;
- (id)avatarView;
- (void)setAvatarView:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:;
- (void)handleClose;
@end

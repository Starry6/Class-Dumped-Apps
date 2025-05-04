@interface AWERecordSelectMusicViewHolder : NSObject
@property (nonatomic) AWERecordSelectMusicComponent component;
@property (nonatomic) UIView<ACCScrollStringButtonProtocol> selectMusicButton;
@property (nonatomic) FPStateFlow stateFlow;
@property (nonatomic) <FPUIComponent> typeErasedComponent;
- (id)typeErasedComponent;
- (void)setTypeErasedComponent:;
- (id)selectMusicButton;
- (void)setSelectMusicButton:;
- (id)stateFlow;
- (void)didClickSelectMusicButton;
- (void)didClickCloseButtonOnMusicButton;
- (void)setStateFlow:;
- (void)addStateFlowStateChanged;
- (void)refreshInitialMusicCover;
- (id)component;
- (void).cxx_destruct;
- (id)initWith:;
- (void)setComponent:;
+ (Class)componentType;
@end

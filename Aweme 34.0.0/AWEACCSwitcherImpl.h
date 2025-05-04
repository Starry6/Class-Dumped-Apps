@interface AWEACCSwitcherImpl : NSObject
@property (nonatomic) UIView<AWESettingSwitchProtocol> switcher;
@property (nonatomic) @? chooseBeforeStatusChangeBlock;
@property (nonatomic) @? switchStatusChangedBlock;
@property (nonatomic) BOOL shouldChooseBeforeChange;
@property (nonatomic) BOOL changeBlockNeedAnimation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)chooseBeforeStatusChangeBlock;
- (BOOL)changeBlockNeedAnimation;
- (id)switchStatusChangedBlock;
- (void)setEnabled:disableOpacity:;
- (void)setChooseBeforeStatusChangeBlock:;
- (void)setSwitchStatusChangedBlock:;
- (BOOL)shouldChooseBeforeChange;
- (void)setShouldChooseBeforeChange:;
- (void)setChangeBlockNeedAnimation:;
- (id)switcher;
- (void)setSwitcher:;
- (id)init;
- (id)content;
- (void).cxx_destruct;
- (void)updateStatus;
@end

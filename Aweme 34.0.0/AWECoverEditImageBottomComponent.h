@interface AWECoverEditImageBottomComponent : ACCSecondaryPageComponent
@property (nonatomic) UIView bottomView;
@property (nonatomic) ACCAnimatedButton selectButton;
@property (nonatomic) BOOL isSaving;
@property (nonatomic) <AWECoverEditImageChooseCoverService> chooseCoverService;
- (void)componentDidMount;
- (void)setIsSaving:;
- (void)trackSetCoverEvent;
- (id)chooseCoverService;
- (void)selectButtonDidClick;
- (unsigned long long)secondaryPageComponentType;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (void)setChooseCoverService:;
- (void).cxx_destruct;
- (BOOL)isSaving;
- (id)bottomView;
- (void)setBottomView:;
- (id)selectButton;
- (void)setSelectButton:;
@end

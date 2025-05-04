@interface AWEHPProfileSideBarEntranceViewAbilityImpl : NSObject
@property (nonatomic) AWELeftSideBarBasePresenter presenter;
@property (nonatomic) AWEHPProfileSideBarManager manager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)closeLeftSideBar;
- (long long)sideBarStatus;
- (id)initWithPresenter:withManager:;
- (void)showCaptionViewWithParameterModel:completion:clickBlock:dismissBlock:;
- (void)hideEntranceCaptionBubbleViewWithComponentID:completion:;
- (void)addLeftSideBarEntranceView:completion:;
- (void)removeLeftSideBarBussinessEntranceView;
- (BOOL)leftSideBarBussinessEntranceViewIsShow;
- (void)showLeftSideBarEntrancePopView:completion:clickBlock:dismissBlock:;
- (void)showLeftSideBarBussinessEntranceRedDot;
- (void)hideLeftSideBarBussinessEntranceRedDot;
- (void)showLeftSideBarBussinessEntranceRedDotWithCount:;
- (void)hideLeftSideBarBussinessEntranceCountRedDot;
- (BOOL)openLeftSideBar;
- (BOOL)leftSideBarIsOpen;
- (BOOL)canCurrentSideBarShowEntranceBadge;
- (void)setManager:;
- (id)presenter;
- (id)manager;
- (void)setPresenter:;
- (void).cxx_destruct;
@end

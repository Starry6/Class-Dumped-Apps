@interface AWEIMBaseViewControllerNaviBarController : NSObject
@property (nonatomic) AWEIMBaseViewControllerNaviBarControllerModel model;
@property (nonatomic) AWEIMBaseViewControllerNaviBarControllerContext context;
@property (nonatomic) IESIMButton contactButton;
@property (nonatomic) UIStackView rightButtonsContainerView;
@property (nonatomic) <AWEIMBaseViewControllerNaviBarControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)renderModel:context:;
- (void)updatePointViewWithHidden:animated:;
- (long long)__imListNaviBarEntranceType;
- (void)__refreshNavigationViews;
- (void)__updateNaviBarWhenUserChanged;
- (void)__releaseUnnecessaryViews;
- (void)__createContactButtonIfNeeded;
- (void)__layoutNavigationViews;
- (void)__layoutIMListNaviBarEntranceTypeChatRoomRightCreateGroupRight;
- (void)__layoutIMListNaviBarEntranceTypeChatRoomRightCreateGroupLeft;
- (void)__layoutIMListNaviBarEntranceTypeDefault;
- (void)__createRightButtonsContainerViewIfNeeded;
- (id)rightButtonsContainerView;
- (void)__addNaviBarCustomView:forPosition:target:action:;
- (void)__didClickContactButton:;
- (BOOL)__shouldShowChatRoomEntrance;
- (id)__chatRoomBusinessContactButton;
- (id)__imBusinessContactButton;
- (void)setRightButtonsContainerView:;
- (BOOL)showBubbleViewIfNeeded;
- (BOOL)isBubbleViewDisplaying;
- (void)setModel:;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
- (id)contactButton;
- (void)setContactButton:;
@end

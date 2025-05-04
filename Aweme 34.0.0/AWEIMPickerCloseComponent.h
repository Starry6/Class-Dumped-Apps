@interface AWEIMPickerCloseComponent : AWEIMComponentBase
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIView naviBar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)naviBar;
- (void)setNaviBar:;
- (void)albumDidClickEntrance:;
- (void)albumDidSelectAlbumAtIndex:;
- (void).cxx_destruct;
- (void)backButtonPressed;
- (void)setCloseButton:;
- (id)closeButton;
- (void)createUI;
@end

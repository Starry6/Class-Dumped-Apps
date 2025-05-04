@interface AWEProfileSideBarComponent : AWEUserHomeBaseComponent
@property (nonatomic) <AWELeftSideBarAmbienceObjectProtocol> ambienceObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (unsigned long long)transition_destinatedType;
- (BOOL)isShowSliderMenuView;
- (id)ambienceObject;
- (void)setAmbienceObject:;
- (void)resetSliderMenu;
- (void)onFindMoreExtensionAreaCardClicked;
- (void)onSliderMenuButtonClicked:highlightItemType:;
- (void)openSidebarBySchema:;
- (BOOL)isRotationSupported;
- (void)p_openSidebarBySchema:;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)onInit;
@end

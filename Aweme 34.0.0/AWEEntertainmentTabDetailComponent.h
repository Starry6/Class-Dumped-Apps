@interface AWEEntertainmentTabDetailComponent : AWEUserHomeBaseComponent
@property (nonatomic) AWEProfileLynxConfiguration lynxConfig;
@property (nonatomic) AWEProfileLynxViewController lynxViewController;
@property (nonatomic) BOOL isTabScrolled;
@property (nonatomic) BOOL isViewDidAppear;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isViewDidAppear;
- (BOOL)enableFontScale;
- (id)lynxConfig;
- (void)setLynxConfig:;
- (void)setLynxViewController:;
- (id)lynxViewController;
- (void)setIsViewDidAppear:;
- (void)onDidSelectTabListIndex:actionType:hasRedDotWhenSwitched:needTrack:;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (void)onResetUI;
- (void)trackTabShow;
- (void)setIsTabScrolled:;
- (void)trackTabClick;
- (unsigned long long)lynxVCAppearStyle;
- (BOOL)isTabScrolled;
- (void).cxx_destruct;
- (id)visibleHeight;
- (void)viewDidAppear;
@end

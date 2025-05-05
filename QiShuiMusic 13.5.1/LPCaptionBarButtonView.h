@interface LPCaptionBarButtonView : LPComponentView
@property (nonatomic) BOOL collapsed;
- (void)addTarget:action:;
- (void)setCollapsed:;
- (BOOL)isCollapsed;
- (void)removeTarget:action:;
- (id)sizeThatFits:;
- (id)initWithHost:;
- (void).cxx_destruct;
- (id)_createButton;
- (id)collapsedSizeThatFits:;
- (void)layoutComponentView;
- (id)initWithHost:properties:style:;
- (id)_createCollapsedButton;
- (void)_configurePillButton:;
- (void)_configureMenuButton:;
- (id)_createMenu;
- (BOOL)_menuButtonShowsImages;
- (BOOL)_menuButtonShowsIndicator;
- (BOOL)_menuButtonShowsChevron;
- (BOOL)_menuButtonShowsSingleImage;
@end

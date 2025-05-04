@interface AWEHPSideBarProfileGridView : AWEHPSideBarGridBaseView
@property (nonatomic) <AWELeftSideBarItemContext> context;
@property (nonatomic) <AWEHPSideBarStencilViewDataModelProtocol> dataModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hideBadge;
- (void)showBadgeWithModel:completion:;
- (id)initWithContext:withDataModel:;
- (double)sideBarStencilViewHeight;
- (void)sideBarThemeDidChange:;
- (void)updateDataModel:;
- (long long)sideBarRedDotStyle;
- (void)stencilViewUpdateSubtitle:;
- (BOOL)isStencilViewDisplayingSubtitle;
- (id)stencilViewDisplayingSubtitle;
- (void)p_updateIconImageWithThemeStyle:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)dataModel;
- (void)setDataModel:;
@end

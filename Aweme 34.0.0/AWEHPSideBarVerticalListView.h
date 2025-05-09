@interface AWEHPSideBarVerticalListView : UIView
@property (nonatomic) <AWELeftSideBarItemContext> context;
@property (nonatomic) <AWEHPSideBarStencilViewDataModelProtocol> cellDataModel;
@property (nonatomic) DUXBaseImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) DUXBaseImageView arrowImageView;
@property (nonatomic) DUXBadge dotBadge;
@property (nonatomic) DUXBadge numberBadge;
@property (nonatomic) q themeStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)setThemeStyle:;
- (void)hideBadge;
- (id)dotBadge;
- (void)setDotBadge:;
- (void)setNumberBadge:;
- (void)p_updateTitleLabel;
- (void)showBadgeWithModel:completion:;
- (id)initWithContext:withDataModel:;
- (double)sideBarStencilViewHeight;
- (void)sideBarThemeDidChange:;
- (void)updateDataModel:;
- (long long)sideBarRedDotStyle;
- (void)stencilViewUpdateSubtitle:;
- (BOOL)isStencilViewDisplayingSubtitle;
- (id)stencilViewDisplayingSubtitle;
- (void)p_loadTitleLabel;
- (void)p_loadSubtitleLabel;
- (void)p_loadDotBadge;
- (void)p_loadNumberBadge;
- (void)p_setupThemeStyle;
- (void)p_updateIconImage;
- (void)setCellDataModel:;
- (void)p_refreshView;
- (void)p_loadIconView;
- (id)cellDataModel;
- (void)p_loadArrowView;
- (id)iconView;
- (void)setSubtitleLabel:;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)context;
- (id)subtitleLabel;
- (long long)themeStyle;
- (id)numberBadge;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end

@interface SFStartPageSectionHeaderTitleView : UIView
@property (nonatomic) NSString title;
@property (nonatomic) UIMenu menu;
- (void)setMenu:;
- (void)dealloc;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)setModel:visualStyleProvider:;
- (id)menu;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (id)title;
- (void)buttonShapesEnabledStatusDidChange:;
- (void).cxx_destruct;
@end

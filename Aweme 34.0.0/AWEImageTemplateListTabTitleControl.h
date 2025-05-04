@interface AWEImageTemplateListTabTitleControl : UICollectionViewCell
@property (nonatomic) UILabel tabLabel;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) UIFont selectedFont;
@property (nonatomic) UIFont unselectedFont;
- (void)setIsSelect:;
- (id)selectedFont;
- (void)setSelectedFont:;
- (BOOL)isSelect;
- (id)tabLabel;
- (void)setTabLabel:;
- (id)unselectedFont;
- (void)setUnselectedFont:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setupUI;
@end

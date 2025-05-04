@interface AWERelationSheetSectionView : UIStackView
@property (nonatomic) UIView headerContentView;
@property (nonatomic) UILabel headerLabel;
@property (nonatomic) UIView footerContentView;
@property (nonatomic) UILabel footerLabel;
@property (nonatomic) UIView contentView;
- (void)setFooterContentView:;
- (id)footerContentView;
- (id)initWithContentView:;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setHeaderLabel:;
- (id)headerLabel;
- (id)headerContentView;
- (void)setHeaderContentView:;
- (void)setFooterLabel:;
- (id)footerLabel;
@end

@interface OBTextSectionView : UIStackView
@property (nonatomic) UILabel headerLabel;
@property (nonatomic) UILabel contentLabel;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (id)_headerFont;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)headerLabel;
- (void)setHeaderLabel:;
- (id)initWithHeader:content:;
- (void)addAccessoryButton:;
- (id)_contentFont;
@end

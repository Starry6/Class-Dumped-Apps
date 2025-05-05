@interface CSJDislikeNewSignalCell : CSJDislikeNewBaseCell
@property (nonatomic) UILabel wordLabel;
@property (nonatomic) UIView sepView;
- (id)sepView;
- (void)refreshWithDislikeWordsViewModel:;
- (void)setDarkStyle;
- (void)setLightStyle;
- (void)setSepView:;
- (void)setWordLabel:;
- (id)wordLabel;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
@end

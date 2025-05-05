@interface CSJDislikeNewOptionalCell : CSJDislikeNewBaseCell
@property (nonatomic) CSJDislikeWordsViewModel dislikeWordsViewModel;
@property (nonatomic) UILabel wordLabel;
@property (nonatomic) UIView optionView;
@property (nonatomic) UIView sepView;
@property (nonatomic) <CSJDislikeNewOptionalCellDelegate> delegate;
- (id)sepView;
- (id)dislikeWordsViewModel;
- (void)itemLabelAction:;
- (void)refreshWithDislikeWordsViewModel:;
- (void)setDarkStyle;
- (void)setDislikeWordsViewModel:;
- (void)setLightStyle;
- (void)setSepView:;
- (void)setWordLabel:;
- (id)wordLabel;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (void)traitCollectionDidChange:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setOptionView:;
- (id)optionView;
@end

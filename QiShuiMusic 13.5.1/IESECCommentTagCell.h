@interface IESECCommentTagCell : UICollectionViewCell
@property (nonatomic) UIButton contentButton;
@property (nonatomic) <IESECCommentGeneralTagModel> currentTag;
@property (nonatomic) <IESECCommentTagCellDelegate> delegate;
- (void)configureWithTag:selected:;
- (void)setContentButton:;
- (void)tagDeselected;
- (void)tagSelected;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupUI;
- (id)contentButton;
- (id)currentTag;
- (void)setCurrentTag:;
@end

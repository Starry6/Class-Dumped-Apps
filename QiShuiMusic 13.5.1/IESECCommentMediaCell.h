@interface IESECCommentMediaCell : UICollectionViewCell
@property (nonatomic) IESECUIImageView mediaImageView;
@property (nonatomic) IESECUIImageView playImageView;
@property (nonatomic) <IESECCommentMediaCellDelegate> delegate;
- (void)clickMediaCell:;
- (void)configureWithCommentModel:;
- (id)mediaImageView;
- (void)setMediaImageView:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupUI;
- (id)playImageView;
- (void)setPlayImageView:;
@end

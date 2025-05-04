@interface AWEIMMessageVCBirthdayEffectCell : UICollectionViewCell
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIImage placeholder;
@property (nonatomic) AWEIMMessageVCBirthdayEffectCellModel model;
@property (nonatomic) <AWEIMMessageVCBirthdayEffectCellDelegate> delegate;
- (void)p_setupView;
- (void)onActionButtonTouched;
- (void)onActionButtonClicked;
- (void)onActionButtonCancel;
- (void)configCard:;
- (void)setModel:;
- (id)delegate;
- (void)setPlaceholder:;
- (id)initWithFrame:;
- (id)model;
- (id)placeholder;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setImageView:;
- (id)imageView;
- (id)actionButton;
- (void)setActionButton:;
@end

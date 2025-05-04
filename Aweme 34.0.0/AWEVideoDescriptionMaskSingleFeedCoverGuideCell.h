@interface AWEVideoDescriptionMaskSingleFeedCoverGuideCell : UICollectionViewCell
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView upArrowImageView;
@property (nonatomic) AWEFeedCollectionContainerContext containerContext;
- (double)bottomSafeAreaOffset;
- (void)recognizeTapGesture;
- (id)upArrowImageView;
- (void)showGuideLabel;
- (void)hideAllView;
- (void)setUpArrowImageView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)containerContext;
- (void)setContainerContext:;
- (void)setCloseButton:;
- (id)closeButton;
- (void)showCloseButton;
@end

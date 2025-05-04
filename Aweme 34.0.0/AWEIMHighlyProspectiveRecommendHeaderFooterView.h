@interface AWEIMHighlyProspectiveRecommendHeaderFooterView : UITableViewHeaderFooterView
@property (nonatomic) UIView lineView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView introductionImageView;
@property (nonatomic) UIImageView closeImageView;
@property (nonatomic) <AWEIMHighlyProspectiveRecommendHeaderFooterViewDelegate> delegate;
- (void)__setupUI;
- (void)__setupLayout;
- (id)introductionImageView;
- (void)__handleIntroductionImageViewClicked;
- (void)__handleCloseImageViewClicked;
- (void)setIntroductionImageView:;
- (id)delegate;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (id)titleLabel;
- (void)setDelegate:;
- (id)lineView;
- (void)setLineView:;
- (id)closeImageView;
- (void)setCloseImageView:;
@end

@interface AWEChallengeVideoHeadView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView sortView;
@property (nonatomic) UILabel sortLabel;
@property (nonatomic) UIImageView sortIcon;
@property (nonatomic) <AWEChallengeVideoHeadViewDelegate> delegate;
- (void)p_setupUI;
- (id)sortLabel;
- (void)setSortLabel:;
- (void)updateSortType:;
- (id)sortIcon;
- (void)onClickSortView;
- (void)setSortIcon:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setSortView:;
- (id)sortView;
@end

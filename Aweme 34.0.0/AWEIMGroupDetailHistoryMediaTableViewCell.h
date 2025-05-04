@interface AWEIMGroupDetailHistoryMediaTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel tailTitleLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) Q strategy;
@property (nonatomic) <AWEIMHistoryMediaDisplayViewDelegate> delegate;
@property (nonatomic) AWEIMHistoryMediaDisplayView displayView;
- (void)setDisplayView:;
- (id)displayView;
- (void)setupStrategy;
- (void)updateLayoutWithStrategy;
- (void)setTailTitleLabel:;
- (id)tailTitleLabel;
- (unsigned long long)strategy;
- (id)delegate;
- (id)initWithDelegate:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setStrategy:;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (double)cellHeightFor:;
@end

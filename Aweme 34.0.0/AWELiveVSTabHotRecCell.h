@interface AWELiveVSTabHotRecCell : UICollectionViewCell
@property (nonatomic) AWEGradientView tagViewGradientView;
@property (nonatomic) AWEGradientView coverBottomGradientView;
@property (nonatomic) UILabel tagView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UILabel periodLabel;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)coverBottomGradientView;
- (void)setCoverBottomGradientView:;
- (id)descLabel;
- (void)setDescLabel:;
- (id)tagViewGradientView;
- (id)periodLabel;
- (void)configCardTag:;
- (void)setPeriodLabel:;
- (void)setTagViewGradientView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setupUI;
- (id)tagView;
- (void)setTagView:;
@end

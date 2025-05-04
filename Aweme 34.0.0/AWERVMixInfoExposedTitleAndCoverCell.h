@interface AWERVMixInfoExposedTitleAndCoverCell : UICollectionViewCell
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIImageView mixVideoCoverView;
@property (nonatomic) AWERVExposedMixInfoPlayCoverView maskCoverView;
- (id)descLabel;
- (void)setDescLabel:;
- (void)updateWithModel:pageContext:;
- (id)maskCoverView;
- (void)setMaskCoverView:;
- (id)mixVideoCoverView;
- (void)setMixVideoCoverView:;
- (id)updateTitleAttributedStringWithIsPlayIng:;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setupUI;
@end

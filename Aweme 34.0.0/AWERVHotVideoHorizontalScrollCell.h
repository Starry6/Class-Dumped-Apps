@interface AWERVHotVideoHorizontalScrollCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) AWEFeedInsetsLabel tagLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) AWERVHotVideoPlayCoverView maskCoverView;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)descLabel;
- (void)setDescLabel:;
- (id)tagLabel;
- (void)setTagLabel:;
- (id)maskCoverView;
- (void)setMaskCoverView:;
- (void)configCellWithModel:currentPlayModelItemId:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end

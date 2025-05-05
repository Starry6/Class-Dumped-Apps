@interface IESLiveInteractDoubleRowCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIView tagContainer;
@property (nonatomic) UIImageView tagImageView;
@property (nonatomic) UILabel tagLabel;
- (id)coverImageView;
- (void)initView;
- (void)setCoverImageView:;
- (void)setTagContainer:;
- (void)setTagImageView:;
- (void)setTagLabel:;
- (id)tagContainer;
- (id)tagImageView;
- (id)tagLabel;
- (id)init;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)nameLabel;
- (void)setNameLabel:;
- (void)updateModel:;
@end

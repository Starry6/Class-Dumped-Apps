@interface IESECGoodsFeedBackSearchHeaderView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView searchSameGoodsTextView;
@property (nonatomic) @? tapAction;
- (void)handleSearchSameGoodsEntrance:;
- (id)initWithImageURL:tapAction:;
- (id)searchSameGoodsTextView;
- (void)setSearchSameGoodsTextView:;
- (void)updateTapAction:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (void)setupUI;
- (id)tapAction;
- (void)setTapAction:;
@end

@interface AWEPOIDetailInfoLiveSeeDetailViewModel : AWEPOIDetailInfoSeparatorViewModel
@property (nonatomic) UILabel labelTitle;
@property (nonatomic) UIImageView imageViewArrow;
@property (nonatomic) AWEPOIDetailStore store;
- (void)setupViewModel;
- (void)setLabelTitle:;
- (id)imageViewArrow;
- (void)didTapDetail:;
- (void)setImageViewArrow:;
- (id)store;
- (id)view;
- (void)setStore:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)labelTitle;
- (void)updateWithModel:;
+ (double)preferredHeightForDataModel:width:margin:padding:cellIdentifier:;
@end

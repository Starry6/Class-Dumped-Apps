@interface AWESearchMerchandiseImageAlbumBaseCell : AWESearchOptimizeGoodsCell
@property (nonatomic) UIImageView tagView;
@property (nonatomic) UIView<AWESearchImageSetViewProtocol> imageAlbumView;
@property (nonatomic) AWESearchMerchandiseGoodsInfoView infoView;
@property (nonatomic) NSString referString;
- (id)referString;
- (void)setReferString:;
- (double)currPlaybackTime;
- (void)configWithModel:;
- (void)setCurrPlaybackTime:;
- (void)setActionRecord:;
- (void)setupTagView;
- (void)imageAlbumInit;
- (id)imageAlbumView;
- (void)setImageAlbumView:;
- (void)imageAlbumStopAndFree;
- (void)didBecomeActive;
- (void)didResignActive;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)activeView;
- (id)infoView;
- (void)setInfoView:;
- (id)tagView;
- (void)setTagView:;
+ (id)identifier;
@end

@interface AWESearchMerchandiseImageAlbumSingleColCell : AWESearchMerchandiseImageAlbumBaseCell
- (void)configWithModel:;
- (void)trackCardShow;
- (void)setSearchInfoDict:;
- (id)imageVideoAreaFrame;
- (id)initWithFrame:;
- (void)layoutSubviews;
+ (double)heightForModel:containerWidth:;
+ (id)identifier;
@end

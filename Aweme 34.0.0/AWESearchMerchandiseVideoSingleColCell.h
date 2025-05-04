@interface AWESearchMerchandiseVideoSingleColCell : AWESearchMerchandiseVideoBaseCell
- (void)configWithModel:;
- (void)trackCardShow;
- (void)setSearchInfoDict:;
- (double)goodsImgWidth;
- (id)imageVideoAreaFrame;
- (id)initWithFrame:;
- (void)layoutSubviews;
+ (double)heightForModel:containerWidth:;
+ (double)goodsImageWidth:containerWidth:;
+ (id)identifier;
@end

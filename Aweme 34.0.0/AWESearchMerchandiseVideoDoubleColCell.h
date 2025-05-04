@interface AWESearchMerchandiseVideoDoubleColCell : AWESearchMerchandiseVideoBaseCell
- (void)configWithModel:;
- (void)trackCardShow;
- (void)setSearchInfoDict:;
- (void)layoutSubviews;
+ (double)heightForModel:containerWidth:;
+ (id)identifier;
@end

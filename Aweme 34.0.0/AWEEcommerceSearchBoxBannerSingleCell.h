@interface AWEEcommerceSearchBoxBannerSingleCell : AWEEcommerceSearchBoxBannerBaseCell
- (void)configWithModel:;
- (id)initWithFrame:;
- (void)layoutSubviews;
+ (double)heightForModel:containerWidth:;
@end

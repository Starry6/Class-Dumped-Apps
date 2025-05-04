@interface AWESearchAdCouponListView : AWESearchCouponListView
@property (nonatomic) UILabel adTagLabel;
@property (nonatomic) AWETagLabelModel adTagLabelModel;
@property (nonatomic) AWESearchMerchandiseAdLabelStruct adLabelModel;
@property (nonatomic) double adTagLabelFontSize;
- (id)adTagLabel;
- (double)adtagBorderWidthWithModel:;
- (void)setAdTagLabelModel:;
- (void)setAdTagLabelFontSize:;
- (void)setAdLabelModel:;
- (id)adTagLabelModel;
- (id)adLabelModel;
- (double)adTagLabelFontSize;
- (void)setAdTagLabel:;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end

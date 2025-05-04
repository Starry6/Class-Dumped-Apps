@interface AWEEcomSearchGoodsDiscountInfoLineView : UIView
@property (nonatomic) AWEEcommerceSearchIconTextView tagView;
@property (nonatomic) UILabel salesLabel;
@property (nonatomic) AWESearchMerchandiseModel merchandise;
- (id)merchandise;
- (void)setSalesLabel:;
- (id)salesLabel;
- (void)configWithMerchandise:;
- (void)setMerchandise:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)tagView;
- (void)setTagView:;
+ (BOOL)isShowDiscountInfoLine:;
@end

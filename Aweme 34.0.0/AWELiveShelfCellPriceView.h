@interface AWELiveShelfCellPriceView : UIView
@property (nonatomic) AWELiveAlignmentBottomLabel ticketLabel;
@property (nonatomic) AWELiveAlignmentBottomLabel priceLabel;
@property (nonatomic) AWELiveAlignmentBottomLabel consumptionLabel;
@property (nonatomic) AWELiveAlignmentBottomLabel oldpriceLabel;
@property (nonatomic) AWELiveShelfCellCouponView couponView;
- (id)couponView;
- (void)setCouponView:;
- (id)ticketLabel;
- (void)setTicketLabel:;
- (id)semiboldFontOfSize:;
- (id)consumptionLabel;
- (id)oldpriceLabel;
- (id)regularFontOfSize:;
- (void)setTicketStr:priceStr:consumptionInfo:oldPriceStr:discountStr:;
- (void)setConsumptionLabel:;
- (void)setOldpriceLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setPrice:;
- (void)setupUI;
- (void)updateFrame;
- (id)priceLabel;
- (void)setPriceLabel:;
- (id)mediumFontOfSize:;
@end

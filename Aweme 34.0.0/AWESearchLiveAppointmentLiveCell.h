@interface AWESearchLiveAppointmentLiveCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIImageView priceBackgroundView;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) AWELiveAnnouncementProductInfo productInfo;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)priceBackgroundView;
- (void)setPriceBackgroundView:;
- (id)productInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setProductInfo:;
- (void)updateWithModel:;
- (id)priceLabel;
- (void)setPriceLabel:;
@end

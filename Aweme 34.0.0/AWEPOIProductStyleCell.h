@interface AWEPOIProductStyleCell : UICollectionViewCell
@property (nonatomic) UIImageView productImage;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) UITapGestureRecognizer tap;
@property (nonatomic) @? contentTapBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)productImage;
- (void)setProductImage:;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)setContentTapBlock:;
- (id)contentTapBlock;
- (void)configWithModel:scene:contentTapBlock:btnTapBlock:;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (id)tap;
- (void)setTap:;
- (void)tapAction;
- (id)priceLabel;
- (void)setPriceLabel:;
@end

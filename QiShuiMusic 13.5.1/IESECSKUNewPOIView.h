@interface IESECSKUNewPOIView : UIStackView
@property (nonatomic) IESECSKUPOIViewModel poiViewModel;
@property (nonatomic) UILabel header;
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) UILabel shopNameLabel;
@property (nonatomic) UILabel addressLabel;
@property (nonatomic) IESECUIImageView arrowImage;
- (id)poiViewModel;
- (void)setPoiViewModel:;
- (void)setShopNameLabel:;
- (id)shopNameLabel;
- (void)setHeader:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)header;
- (void)setupUI;
- (id)hintLabel;
- (void)setHintLabel:;
- (id)addressLabel;
- (void)setAddressLabel:;
- (id)arrowImage;
- (void)setArrowImage:;
+ (double)heightWithViewModel:;
@end

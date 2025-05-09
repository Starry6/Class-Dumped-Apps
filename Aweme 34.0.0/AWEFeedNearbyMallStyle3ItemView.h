@interface AWEFeedNearbyMallStyle3ItemView : UIView
@property (nonatomic) UIImageView poiImageView;
@property (nonatomic) UIView descInfoView;
@property (nonatomic) UIStackView tagStackView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel firstTagLabel;
@property (nonatomic) UILabel secondTagLabel;
@property (nonatomic) UILabel thirdTagLabel;
@property (nonatomic) UIView thirdLineView;
@property (nonatomic) UILabel priceDiscLabel;
@property (nonatomic) UILabel spuLabel;
@property (nonatomic) UILabel hotDescLabel;
@property (nonatomic) UIImageView hotDescIconView;
@property (nonatomic) BOOL hasTagLabel;
@property (nonatomic) BOOL hasHotDesc;
@property (nonatomic) BOOL hasSpu;
@property (nonatomic) BOOL hasHotDescIcon;
- (void)__setupUI;
- (id)initWithViewConfig:;
- (id)tagStackView;
- (void)setTagStackView:;
- (id)firstTagLabel;
- (id)secondTagLabel;
- (void)setFirstTagLabel:;
- (void)setSecondTagLabel:;
- (void)setThirdTagLabel:;
- (id)thirdTagLabel;
- (void)setHasTagLabel:;
- (void)setHasHotDesc:;
- (void)setHasSpu:;
- (void)setHasHotDescIcon:;
- (id)poiImageView;
- (BOOL)hasTagLabel;
- (BOOL)hasHotDesc;
- (id)hotDescLabel;
- (BOOL)hasHotDescIcon;
- (id)hotDescIconView;
- (BOOL)hasSpu;
- (id)spuLabel;
- (id)descInfoView;
- (void)setPoiImageView:;
- (void)setDescInfoView:;
- (void)setHotDescLabel:;
- (void)setHotDescIconView:;
- (void)setSpuLabel:;
- (id)priceDiscLabel;
- (id)thirdLineView;
- (void)setThirdLineView:;
- (void)setPriceDiscLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
@end

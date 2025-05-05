@interface IESECSKUNewPriceView : UIView
@property (nonatomic) UIColor atmosphereColor;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) UIView crossLine;
@property (nonatomic) UIView specialView;
- (id)atmosphereColor;
- (void)setSpecialView:;
- (id)crossLine;
- (void)setAtmosphereColor:;
- (void)setCrossLine:;
- (id)specialView;
- (void)updateWithPrice:withType:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)priceLabel;
- (void)setPriceLabel:;
+ (void)setAttributePriceLabel:WithPrice:withType:;
+ (id)sizeWithPrice:withType:;
@end

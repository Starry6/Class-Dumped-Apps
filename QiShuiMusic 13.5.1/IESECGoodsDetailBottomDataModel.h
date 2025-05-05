@interface IESECGoodsDetailBottomDataModel : IESECBaseApiModel
@property (nonatomic) IESECMultiTextWithIconElement bottomItems;
@property (nonatomic) NSArray bottomButtons;
@property (nonatomic) NSArray bottomButtonsSmallMode;
@property (nonatomic) IESECSeparateLineElement buttonDivider;
@property (nonatomic) IESECTextWithIconElement tip;
@property (nonatomic) IESECGoodsDetailLynxCardElement supermarket;
@property (nonatomic) IESECGoodsDetailLynxCardElement lynxTip;
- (void)setSupermarket:;
- (id)lynxTip;
- (void)setBottomItems:;
- (id)bottomButtons;
- (id)bottomButtonsSmallMode;
- (id)bottomItems;
- (id)buttonDivider;
- (void)setBottomButtons:;
- (void)setBottomButtonsSmallMode:;
- (void)setButtonDivider:;
- (void)setLynxTip:;
- (id)supermarket;
- (id)tip;
- (void)setTip:;
- (void).cxx_destruct;
+ (id)bottomButtonsJSONTransformer;
+ (id)bottomButtonsSmallModeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

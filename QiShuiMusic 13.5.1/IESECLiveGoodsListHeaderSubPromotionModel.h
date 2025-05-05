@interface IESECLiveGoodsListHeaderSubPromotionModel : MTLModel
@property (nonatomic) NSString background;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) IESECLiveGoodsBackGroundLeftModel leftTitleComponent;
@property (nonatomic) IESECLiveGoodsListHeaderPromotionRightModel rightComponent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)leftTitleComponent;
- (id)rightComponent;
- (void)setLeftTitleComponent:;
- (void)setRightComponent:;
- (id)background;
- (void)setBackground:;
- (void)setWidth:;
- (id)height;
- (id)width;
- (void)setHeight:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface IESECShopScoreStyle : MTLModel
@property (nonatomic) IESECURLModel scoreIcon;
@property (nonatomic) IESECURLModel halfScoreIcon;
@property (nonatomic) IESECURLModel emptyScoreIcon;
@property (nonatomic) NSString fontColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)emptyScoreIcon;
- (id)halfScoreIcon;
- (id)scoreIcon;
- (void)setEmptyScoreIcon:;
- (void)setHalfScoreIcon:;
- (void)setScoreIcon:;
- (void).cxx_destruct;
- (id)fontColor;
- (void)setFontColor:;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface IESECGoodsShopGuideResponse : IESECBaseApiModel
@property (nonatomic) NSString shopGuideId;
@property (nonatomic) BOOL isShopGuide;
@property (nonatomic) NSString toastMsg;
- (void)setShopGuideId:;
- (void)setIsShopGuide:;
- (BOOL)isShopGuide;
- (void)setToastMsg:;
- (id)shopGuideId;
- (id)toastMsg;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

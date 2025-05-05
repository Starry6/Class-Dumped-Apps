@interface IESECMallShopMomentCardUIModel : NSObject
@property (nonatomic) Q cardDisplayType;
@property (nonatomic) BOOL isFirstCard;
- (unsigned long long)cardDisplayType;
- (void)setIsFirstCard:;
- (BOOL)isFirstCard;
- (void)setCardDisplayType:;
@end

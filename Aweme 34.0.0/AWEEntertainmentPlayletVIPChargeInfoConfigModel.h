@interface AWEEntertainmentPlayletVIPChargeInfoConfigModel : AWEBaseApiModel
@property (nonatomic) Q vipType;
@property (nonatomic) BOOL hasPaid;
- (void)setVipType:;
- (unsigned long long)vipType;
- (BOOL)hasPaid;
- (void)setHasPaid:;
+ (id)JSONKeyPathsByPropertyKey;
@end

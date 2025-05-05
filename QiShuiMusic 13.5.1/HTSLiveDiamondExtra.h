@interface HTSLiveDiamondExtra : IESLivePBBaseMessage
@property (nonatomic) HTSLiveBannerRechargeInfo bannerRechargeInfo;
@property (nonatomic) BOOL hasBannerRechargeInfo;
@property (nonatomic) NSMutableDictionary bizExtra;
@property (nonatomic) Q bizExtra_Count;
+ (id)descriptor;
@end

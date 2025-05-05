@interface LotteryExpandActivityInfo : IESLivePBBaseMessage
@property (nonatomic) q bizId;
@property (nonatomic) NSString expandActivityId;
@property (nonatomic) NSString ruleText;
@property (nonatomic) NSString tipsText;
@property (nonatomic) q expandLuckyCount;
@property (nonatomic) q expandGrantCount;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
@property (nonatomic) NSString extraGiftBag;
@property (nonatomic) q bytepayVoucherSwitcher;
+ (id)descriptor;
@end

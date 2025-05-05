@interface LotteryDefaultConfig : IESLivePBBaseMessage
@property (nonatomic) q countDown;
@property (nonatomic) q userNum;
@property (nonatomic) q prizeCount;
@property (nonatomic) q giftId;
@property (nonatomic) q giftCount;
@property (nonatomic) q isFirstLottery;
@property (nonatomic) NSString command;
@property (nonatomic) NSString prizeName;
@property (nonatomic) GPBInt32Array conditionTypesArray;
@property (nonatomic) Q conditionTypesArray_Count;
@property (nonatomic) q prizeAverage;
@property (nonatomic) NSString prizeDescription;
@property (nonatomic) q minFansLevel;
@property (nonatomic) NSString phoneNum;
@property (nonatomic) q bytepayVoucherSwitcher;
@property (nonatomic) NSInteger sendType;
@property (nonatomic) LotteryRegularlyConfig regularlyConfig;
@property (nonatomic) BOOL hasRegularlyConfig;
@property (nonatomic) q countDownV2;
@property (nonatomic) q userNumV2;
@property (nonatomic) q prizeAverageV2;
@property (nonatomic) q minFansLevelV2;
+ (id)descriptor;
@end

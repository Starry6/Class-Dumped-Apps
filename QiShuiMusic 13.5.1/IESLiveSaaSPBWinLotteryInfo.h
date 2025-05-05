@interface IESLiveSaaSPBWinLotteryInfo : GPBMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString name;
@property (nonatomic) NSString img;
@property (nonatomic) NSString buttonLabel;
@property (nonatomic) NSString winRecordId;
@property (nonatomic) NSString activityId;
@property (nonatomic) BOOL isAddressed;
@property (nonatomic) IESLiveSaaSPBWinLotteryAlert alert;
@property (nonatomic) BOOL hasAlert;
@property (nonatomic) BOOL isWin;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) q productId;
@property (nonatomic) GPBInt64Array activityPriceArray;
@property (nonatomic) Q activityPriceArray_Count;
@property (nonatomic) q buyTime;
@property (nonatomic) q lotteryType;
@property (nonatomic) NSString productIdStr;
+ (id)descriptor;
@end

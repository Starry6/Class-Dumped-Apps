@interface IESECLiveMarketingMessage : GPBMessage
@property (nonatomic) NSInteger msgType;
@property (nonatomic) GPBInt64Array productIdsArray;
@property (nonatomic) Q productIdsArray_Count;
@property (nonatomic) IESECAuctionSuccess auctionSuccess;
@property (nonatomic) BOOL hasAuctionSuccess;
@property (nonatomic) IESECAuctionInfo auctionInfo;
@property (nonatomic) BOOL hasAuctionInfo;
@property (nonatomic) IESECRedpackActivityInfo redpackActivityInfo;
@property (nonatomic) BOOL hasRedpackActivityInfo;
@property (nonatomic) IESECWinLotteryInfo winLotteryinfo;
@property (nonatomic) BOOL hasWinLotteryinfo;
@property (nonatomic) IESECLotteryInfoList lotteryInfoList;
@property (nonatomic) BOOL hasLotteryInfoList;
@property (nonatomic) IESECCouponInfo couponInfo;
@property (nonatomic) BOOL hasCouponInfo;
@property (nonatomic) IESECTaskInfo taskInfo;
@property (nonatomic) BOOL hasTaskInfo;
+ (id)descriptor;
@end

@interface IESLiveSaaSPBCheckUserRightResult_Data : GPBMessage
@property (nonatomic) IESLiveSaaSPBLotteryUserCondition userCondition;
@property (nonatomic) BOOL hasUserCondition;
@property (nonatomic) IESLiveSaaSPBLotteryInfo lotteryInfo;
@property (nonatomic) BOOL hasLotteryInfo;
@property (nonatomic) NSMutableArray candidateUsersArray;
@property (nonatomic) Q candidateUsersArray_Count;
@property (nonatomic) q candidateUserNum;
@property (nonatomic) IESLiveSaaSPBLotteryLuckyUser userLuckyInfo;
@property (nonatomic) BOOL hasUserLuckyInfo;
@property (nonatomic) IESLiveSaaSPBLotteryGiftGuide giftGuide;
@property (nonatomic) BOOL hasGiftGuide;
@property (nonatomic) BOOL hasWishGift;
+ (id)descriptor;
@end

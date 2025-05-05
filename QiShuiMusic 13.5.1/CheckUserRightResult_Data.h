@interface CheckUserRightResult_Data : IESLivePBBaseMessage
@property (nonatomic) LotteryUserCondition userCondition;
@property (nonatomic) BOOL hasUserCondition;
@property (nonatomic) LotteryInfo lotteryInfo;
@property (nonatomic) BOOL hasLotteryInfo;
@property (nonatomic) NSMutableArray candidateUsersArray;
@property (nonatomic) Q candidateUsersArray_Count;
@property (nonatomic) q candidateUserNum;
@property (nonatomic) LotteryLuckyUser userLuckyInfo;
@property (nonatomic) BOOL hasUserLuckyInfo;
@property (nonatomic) LotteryGiftGuide giftGuide;
@property (nonatomic) BOOL hasGiftGuide;
@property (nonatomic) BOOL hasWishGift;
@property (nonatomic) BOOL hitBlackList;
@property (nonatomic) NSMutableArray expandActivityInfoListArray;
@property (nonatomic) Q expandActivityInfoListArray_Count;
@property (nonatomic) NSMutableArray userCustomizedConditionArray;
@property (nonatomic) Q userCustomizedConditionArray_Count;
+ (id)descriptor;
@end

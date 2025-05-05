@interface IESLiveWaitingListUserInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL applicationHasExpired;
@property (nonatomic) BOOL isMutualFollowing;
@property (nonatomic) NSString applicationReason;
@property (nonatomic) NSString last7DaysGiftCountText;
@property (nonatomic) NSString fuzzyFanTicketStr;
@property (nonatomic) q applyTimeSec;
+ (id)descriptor;
@end

@interface IESLiveSaaSPBWaitingListUserInfo : GPBMessage
@property (nonatomic) BOOL applicationHasExpired;
@property (nonatomic) BOOL isMutualFollowing;
@property (nonatomic) NSString applicationReason;
@property (nonatomic) NSString last7DaysGiftCountText;
+ (id)descriptor;
@end

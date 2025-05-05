@interface IESLiveSaaSPBRoomStats : GPBMessage
@property (nonatomic) q fanTicket;
@property (nonatomic) q totalUser;
@property (nonatomic) NSString totalUserDesp;
@property (nonatomic) q giftUvCount;
@property (nonatomic) q followCount;
@property (nonatomic) NSString douPlusPromotion;
@property (nonatomic) IESLiveSaaSPBRoomStats_UserCountComposition userCountComposition;
@property (nonatomic) BOOL hasUserCountComposition;
@property (nonatomic) NSString totalUserStr;
@property (nonatomic) NSString userCountStr;
@property (nonatomic) NSString upRightStatsStr;
@property (nonatomic) NSString upRightStatsStrComplete;
@property (nonatomic) q likeCount;
@property (nonatomic) q commentCount;
@property (nonatomic) q welfareDonationAmount;
@property (nonatomic) q id_p;
@property (nonatomic) NSString idStr;
@property (nonatomic) q money;
@property (nonatomic) q watermelon;
@property (nonatomic) q diggCount;
@property (nonatomic) q enterCount;
+ (id)descriptor;
@end

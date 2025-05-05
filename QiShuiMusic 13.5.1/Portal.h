@interface Portal : IESLivePBBaseMessage
@property (nonatomic) NSNumber serverTime;
@property (nonatomic) q startTime;
@property (nonatomic) q enterCount;
@property (nonatomic) HTSLiveUser sugarDaddy;
@property (nonatomic) BOOL hasSugarDaddy;
@property (nonatomic) q roomId;
@property (nonatomic) HTSLiveUser anchor;
@property (nonatomic) BOOL hasAnchor;
@property (nonatomic) q portalId;
@property (nonatomic) NSInteger userType;
@property (nonatomic) q inviteeCount;
@property (nonatomic) NSInteger status;
@property (nonatomic) q waitDuration;
@property (nonatomic) q rewardDuration;
@property (nonatomic) q totalAmount;
@property (nonatomic) HTSLiveImage cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) q roomLuckyMoneyAmount;
@property (nonatomic) NSMutableArray audiencesArray;
@property (nonatomic) Q audiencesArray_Count;
@property (nonatomic) q distributeStrategy;
- (void)setServerTime:;
- (id)serverTime;
+ (id)descriptor;
@end

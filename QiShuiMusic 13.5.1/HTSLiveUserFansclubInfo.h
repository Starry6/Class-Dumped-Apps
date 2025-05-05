@interface HTSLiveUserFansclubInfo : IESLivePBBaseMessage
@property (nonatomic) q intimacy;
@property (nonatomic) q level;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSMutableArray taskInfosArray;
@property (nonatomic) Q taskInfosArray_Count;
@property (nonatomic) q nextLevelIntimacy;
@property (nonatomic) BOOL autoLightUpStatus;
@property (nonatomic) NSString clubName;
@property (nonatomic) HTSLiveFansclubBadge badge;
@property (nonatomic) BOOL hasBadge;
@property (nonatomic) q curLevelMinIntimacy;
@property (nonatomic) q watchingDuration;
@property (nonatomic) q participateTime;
@property (nonatomic) NSString intimacyStr;
+ (id)descriptor;
@end

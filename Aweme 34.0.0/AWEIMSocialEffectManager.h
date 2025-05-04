@interface AWEIMSocialEffectManager : NSObject
+ (void)requestSocialInfoWithParams:complete:;
+ (void)requestSocialRelationshipInfoWithParams:complete:;
+ (void)requestSparkInfoWithParams:complete:;
+ (void)requestBurningManInfoWithParams:complete:;
+ (void)requestRandomGroupListWithParams:complete:;
+ (void)requestGroupBaseInfoWithParams:complete:;
+ (void)fetchAchieveServerDatafromServerWithCon:complete:;
@end

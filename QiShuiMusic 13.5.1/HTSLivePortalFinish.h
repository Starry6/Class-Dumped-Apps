@interface HTSLivePortalFinish : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser luckyPerson;
@property (nonatomic) BOOL hasLuckyPerson;
+ (id)descriptor;
@end

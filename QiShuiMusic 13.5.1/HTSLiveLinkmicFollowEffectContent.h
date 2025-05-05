@interface HTSLiveLinkmicFollowEffectContent : IESLivePBBaseMessage
@property (nonatomic) q roomId;
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) NSMutableArray followInfosArray;
@property (nonatomic) Q followInfosArray_Count;
+ (id)descriptor;
@end

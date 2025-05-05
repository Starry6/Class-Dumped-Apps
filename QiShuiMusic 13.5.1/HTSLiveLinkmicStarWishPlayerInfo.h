@interface HTSLiveLinkmicStarWishPlayerInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q targetScore;
@property (nonatomic) q curScore;
@property (nonatomic) NSString declaration;
@property (nonatomic) NSString dressId;
+ (id)descriptor;
@end

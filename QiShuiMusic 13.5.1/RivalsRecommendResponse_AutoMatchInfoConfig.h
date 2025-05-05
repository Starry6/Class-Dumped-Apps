@interface RivalsRecommendResponse_AutoMatchInfoConfig : IESLivePBBaseMessage
@property (nonatomic) q inviteLimitSec;
@property (nonatomic) q speedUpLevel;
@property (nonatomic) q pkAutoMatchIndex;
+ (id)descriptor;
@end

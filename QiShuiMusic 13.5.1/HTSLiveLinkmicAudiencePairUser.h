@interface HTSLiveLinkmicAudiencePairUser : IESLivePBBaseMessage
@property (nonatomic) HTSLiveLinkmicAudiencePairUserInfo guest;
@property (nonatomic) BOOL hasGuest;
@property (nonatomic) HTSLiveLinkmicAudiencePairUserInfo investor;
@property (nonatomic) BOOL hasInvestor;
+ (id)descriptor;
@end

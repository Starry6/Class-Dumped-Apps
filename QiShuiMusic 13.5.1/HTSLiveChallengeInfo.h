@interface HTSLiveChallengeInfo : IESLivePBBaseMessage
@property (nonatomic) NSString id_p;
@property (nonatomic) NSString name;
@property (nonatomic) NSString description_p;
+ (id)descriptor;
@end

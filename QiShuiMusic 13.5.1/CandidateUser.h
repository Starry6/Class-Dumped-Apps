@interface CandidateUser : IESLivePBBaseMessage
@property (nonatomic) NSString userOpenId;
@property (nonatomic) NSString userUnionId;
@property (nonatomic) NSString userName;
@property (nonatomic) NSString avatarURL;
@property (nonatomic) NSString secUserId;
+ (id)descriptor;
@end

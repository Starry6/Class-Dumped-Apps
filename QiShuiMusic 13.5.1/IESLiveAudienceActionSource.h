@interface IESLiveAudienceActionSource : IESLivePBBaseMessage
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) NSInteger inviteSource;
@property (nonatomic) NSInteger permitSource;
+ (id)descriptor;
@end

@interface IESLiveUserProfileExtra : IESLivePBBaseMessage
@property (nonatomic) BOOL anonymousIsSilence;
@property (nonatomic) NSString mysteryDetailJumpSchema;
+ (id)descriptor;
@end

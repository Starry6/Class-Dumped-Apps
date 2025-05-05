@interface HTSLiveChatIdentity : IESLivePBBaseMessage
@property (nonatomic) NSInteger showIdentity;
@property (nonatomic) HTSLiveImage identityLabel;
@property (nonatomic) BOOL hasIdentityLabel;
+ (id)descriptor;
@end

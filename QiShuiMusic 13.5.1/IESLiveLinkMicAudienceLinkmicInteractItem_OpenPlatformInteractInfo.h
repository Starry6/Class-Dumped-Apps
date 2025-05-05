@interface IESLiveLinkMicAudienceLinkmicInteractItem_OpenPlatformInteractInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger interactType;
@property (nonatomic) NSString appId;
@property (nonatomic) BOOL interactiveScreenCast;
+ (id)descriptor;
@end

@interface IESLiveUserVersionInfo : IESLivePBBaseMessage
@property (nonatomic) q clientVersion;
@property (nonatomic) q webcastVersion;
@property (nonatomic) q appId;
@property (nonatomic) NSString devicePlatform;
+ (id)descriptor;
@end

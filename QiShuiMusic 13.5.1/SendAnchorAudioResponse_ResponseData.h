@interface SendAnchorAudioResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) q msgId;
@property (nonatomic) HTSLiveText rtfContent;
@property (nonatomic) BOOL hasRtfContent;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSInteger showIdentity;
@property (nonatomic) HTSLiveImage identityLabel;
@property (nonatomic) BOOL hasIdentityLabel;
+ (id)descriptor;
@end

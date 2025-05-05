@interface IESLiveLinkMicAudiencePermitResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSInteger vendor;
@property (nonatomic) NSString rtcAppId;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) NSString rivalLinkmicIdStr;
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) q linkmicId;
@property (nonatomic) NSString rtcAppSign;
@property (nonatomic) q rivalLinkmicId;
@property (nonatomic) NSString remoteLinkerSessionId;
+ (id)descriptor;
@end

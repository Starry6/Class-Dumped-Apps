@interface IESLiveLinkMicAudienceGalileoResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) double mSpeedShakeMillSeconds;
@property (nonatomic) double accelerameterThreshold;
@property (nonatomic) double minShakeInterval;
@property (nonatomic) double shakeEndTimeIntervalThreshold;
@property (nonatomic) double shakeIntervalMillsecond;
+ (id)descriptor;
@end

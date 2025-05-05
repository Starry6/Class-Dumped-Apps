@interface IESLiveLinkMicAudienceUpdateLinkTypeApplyResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSString liveCoreExtInfo;
@property (nonatomic) IESLiveMultiRtcInfo multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (nonatomic) NSString ackMessage;
+ (id)descriptor;
@end

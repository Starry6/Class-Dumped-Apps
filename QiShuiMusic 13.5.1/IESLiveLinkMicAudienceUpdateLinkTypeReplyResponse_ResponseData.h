@interface IESLiveLinkMicAudienceUpdateLinkTypeReplyResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSString liveCoreExtInfo;
@property (nonatomic) IESLiveMultiRtcInfo multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
+ (id)descriptor;
@end

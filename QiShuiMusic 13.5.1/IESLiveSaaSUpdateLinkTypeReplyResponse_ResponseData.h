@interface IESLiveSaaSUpdateLinkTypeReplyResponse_ResponseData : GPBMessage
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSString liveCoreExtInfo;
@property (nonatomic) IESLiveSaaSPBMultiRtcInfo multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
+ (id)descriptor;
@end

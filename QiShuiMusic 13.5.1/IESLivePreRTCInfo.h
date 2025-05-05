@interface IESLivePreRTCInfo : IESLivePBBaseMessage
@property (nonatomic) GPBInt64ObjectDictionary preRtcUserInfo;
@property (nonatomic) Q preRtcUserInfo_Count;
@property (nonatomic) q version;
@property (nonatomic) BOOL rtcJoinChannel;
+ (id)descriptor;
@end

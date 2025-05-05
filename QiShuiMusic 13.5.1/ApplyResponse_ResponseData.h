@interface ApplyResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSInteger vendor;
@property (nonatomic) NSString signExtra;
@property (nonatomic) BOOL rtcJoinChannel;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) BOOL rtcPushStream;
@property (nonatomic) IESLiveMultiRtcInfo multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (nonatomic) IESLiveMultiLiveCoreInfo multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (nonatomic) IESLiveMultiChannelInfo multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (nonatomic) IESLivePreRTCInfo preRtcInfo;
@property (nonatomic) BOOL hasPreRtcInfo;
@property (nonatomic) q waitSec;
+ (id)descriptor;
@end

@interface HTSLiveCrossRoomRTCInfoContent : IESLivePBBaseMessage
@property (nonatomic) IESLiveMultiChannelInfo multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (nonatomic) IESLivePreRTCInfo preRtcInfo;
@property (nonatomic) BOOL hasPreRtcInfo;
+ (id)descriptor;
@end

@interface JoinChannelResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) JoinChannelResponse_MultiAnchorLinkmicRtcLiveCoreData rtcLiveCoreData;
@property (nonatomic) BOOL hasRtcLiveCoreData;
@property (nonatomic) NSInteger anchorUiLayout;
@property (nonatomic) IESLiveAnchorLayoutInfo layoutInfo;
@property (nonatomic) BOOL hasLayoutInfo;
+ (id)descriptor;
@end

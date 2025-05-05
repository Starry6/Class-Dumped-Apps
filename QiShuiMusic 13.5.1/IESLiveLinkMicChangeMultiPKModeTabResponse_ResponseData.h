@interface IESLiveLinkMicChangeMultiPKModeTabResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) IESLiveMultiPKModeInfo multiPkModeInfo;
@property (nonatomic) BOOL hasMultiPkModeInfo;
+ (id)descriptor;
@end

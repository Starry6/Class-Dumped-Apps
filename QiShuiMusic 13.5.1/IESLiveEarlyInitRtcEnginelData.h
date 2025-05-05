@interface IESLiveEarlyInitRtcEnginelData : IESLivePBBaseMessage
@property (nonatomic) BOOL isInWaiting;
@property (nonatomic) IESLiveLinkmicMediaInfo mediaInfo;
@property (nonatomic) BOOL hasMediaInfo;
@property (nonatomic) NSString onerAppid;
+ (id)descriptor;
@end

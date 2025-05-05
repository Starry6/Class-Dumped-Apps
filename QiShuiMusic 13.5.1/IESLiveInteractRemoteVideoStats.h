@interface IESLiveInteractRemoteVideoStats : NSObject
@property (nonatomic) Q delay;
@property (nonatomic) NSString strUID;
@property (nonatomic) double receivedKBitrate;
- (double)receivedKBitrate;
- (void)setReceivedKBitrate:;
- (void)setStrUID:;
- (id)strUID;
- (unsigned long long)delay;
- (void)setDelay:;
- (void).cxx_destruct;
@end

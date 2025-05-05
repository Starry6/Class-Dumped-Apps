@interface VCMediaStreamReceiveGroup : VCMediaStreamGroup
@property (nonatomic) NSNumber optedInStreamID;
@property (nonatomic) NSNumber activeStreamID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithConfig:;
- (void)setActiveStreamIDs:;
- (void)vcMediaStreamDidRTPTimeOut:;
- (void)vcMediaStreamDidRTCPTimeOut:;
- (void)vcMediaStreamDidDecryptionTimeOut:;
- (void)vcMediaStreamDidDecryptionTimeOutForMKMRecovery:;
- (void)setActiveStreamID:;
- (void)setActualBitrateForOptedInStreamWithActiveStreamID:;
- (void)setupMaxBitrateMap;
- (void)notifyChangeInActiveMediaBitrateTo:from:;
- (id)optedInStreamID;
- (id)activeStreamID;
@end

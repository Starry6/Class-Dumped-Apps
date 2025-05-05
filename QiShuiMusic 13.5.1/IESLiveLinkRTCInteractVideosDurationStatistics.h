@interface IESLiveLinkRTCInteractVideosDurationStatistics : NSObject
@property (nonatomic) NSMutableDictionary remoteVideoSubScribeStart;
@property (nonatomic) NSMutableDictionary remoteVideoSubScribeEnd;
- (double)calculatVideosSubScribeDuration;
- (void)endRecordTimeStamp:;
- (id)remoteVideoSubScribeEnd;
- (id)remoteVideoSubScribeStart;
- (void)setRemoteVideoSubScribeEnd:;
- (void)setRemoteVideoSubScribeStart:;
- (void)startRecordTimeStamp:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end

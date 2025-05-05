@interface IESLiveProbePlayerStreamTracker : NSObject
@property (nonatomic) NSNumber roomID;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hadGotFirstFrame;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hadGotFirstFrame;
- (BOOL)isNotSameRoom:;
- (void)markProbeStreamCorrect:;
- (void)markProbeStreamGotFirstFrame:;
- (void)probeStreamWithRoom:;
- (void)setHadGotFirstFrame:;
- (void)setStartTime:;
- (double)startTime;
- (void).cxx_destruct;
- (void)reset;
- (id)roomID;
- (void)setRoomID:;
@end

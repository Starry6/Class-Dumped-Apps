@interface AWEAdPlayableInteractiveStatusModel : NSObject
@property (nonatomic) Q componentType;
@property (nonatomic) double totalPlayTime;
@property (nonatomic) q replayCount;
@property (nonatomic) q playableEnterFrom;
@property (nonatomic) q playableSequence;
@property (nonatomic) double stayDuration;
@property (nonatomic) double firstPlayDuration;
@property (nonatomic) double firstInterationTimestamp;
- (double)totalPlayTime;
- (double)stayDuration;
- (void)setStayDuration:;
- (long long)playableEnterFrom;
- (void)setPlayableEnterFrom:;
- (long long)replayCount;
- (void)setReplayCount:;
- (long long)playableSequence;
- (void)setTotalPlayTime:;
- (void)setPlayableSequence:;
- (double)firstPlayDuration;
- (void)setFirstPlayDuration:;
- (double)firstInterationTimestamp;
- (void)setFirstInterationTimestamp:;
- (unsigned long long)componentType;
- (void)setComponentType:;
@end

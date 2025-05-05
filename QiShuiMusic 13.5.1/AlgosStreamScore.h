@interface AlgosStreamScore : NSObject
@property (nonatomic) BOOL debug;
@property (nonatomic) BOOL enforceStreamEnd;
@property (nonatomic) BOOL music;
- (BOOL)restoreEventsFromFile:clear:;
- (void)addStreamEnd:;
- (id)init;
- (void)addStreamTierSwitch:end:quality:weight:;
- (void)addStreamStart:play:;
- (void)setDebug:;
- (void)dealloc;
- (BOOL)debug;
- (void)addStreamPenalty:amount:;
- (void)addStreamStall:end:quality:weight:params:;
- (double)findTotalTime:debug:;
- (BOOL)music;
- (BOOL)enforceStreamEnd;
- (void)addStreamFailure:weight:;
- (void)setMusic:;
- (void)addStreamStall:end:quality:weight:;
- (id)scoreStreaming:;
- (void)setEnforceStreamEnd:;
- (void)addRawStreamEvent:start:end:weight:quality:params:;
- (BOOL)saveEventsToFile:;
- (void)addStreamStartupStall:end:quality:weight:;
- (void)clearStreamRows;
+ (id)streamScore;
@end

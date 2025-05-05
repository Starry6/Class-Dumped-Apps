@interface IESLiveGiveGiftTimeTraceTool : NSObject
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) HTSLiveGiftStruct gift;
@property (nonatomic) BOOL sendBySelf;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) NSMutableDictionary traceMap;
- (long long)durationBetweenStep:withStep:;
- (long long)durationBetweenStep:withTime:;
- (id)generateNewTraceToolWithGift:;
- (id)initWithTrackContext:gift:sendBySelf:isAnchor:;
- (void)reportTrackAndMonitor;
- (BOOL)sendBySelf;
- (void)setIsAnchor:;
- (void)setSendBySelf:;
- (void)setTraceMap:;
- (void)setTrackContext:;
- (id)traceMap;
- (void)traceWithStep:timestamp:end:;
- (id)trackContext;
- (BOOL)isAnchor;
- (void).cxx_destruct;
- (id)gift;
- (void)setGift:;
@end

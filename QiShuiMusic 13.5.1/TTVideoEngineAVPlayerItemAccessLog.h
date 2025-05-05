@interface TTVideoEngineAVPlayerItemAccessLog : NSObject
@property (nonatomic) NSMutableArray eventArray;
@property (nonatomic) NSArray events;
@property (nonatomic) AVPlayerItemAccessLog accessLog;
- (void)setAccessLog:;
- (id)init;
- (void).cxx_destruct;
- (id)events;
- (void)addEvent:;
- (id)accessLog;
- (void)clearEvent;
- (id)eventArray;
- (void)setEventArray:;
@end

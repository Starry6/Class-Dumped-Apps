@interface MNTracePlayerTimelineStream : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) Q nextIndex;
@property (nonatomic) double nextUpdatePosition;
- (unsigned long long)nextIndex;
- (void)setHandler:;
- (id)handler;
- (id)initWithData:;
- (void).cxx_destruct;
- (void)triggerNextUpdate;
- (void)jumpToPosition:;
- (double)nextUpdatePosition;
@end

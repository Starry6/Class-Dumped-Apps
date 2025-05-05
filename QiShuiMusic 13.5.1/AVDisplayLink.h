@interface AVDisplayLink : NSObject
@property (nonatomic) @? linkFired;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) @ observer;
@property (nonatomic) double startTime;
@property (nonatomic) double runningTime;
- (id)displayLink;
- (void)setDisplayLink:;
- (void)setStartTime:;
- (double)startTime;
- (void)setObserver:;
- (void).cxx_destruct;
- (void)invalidate;
- (id)observer;
- (void)linkFired:;
- (void)startDisplayLinkUpdatesForObserver:framesPerSecond:usingBlock:;
- (double)runningTime;
- (id)linkFired;
- (void)setLinkFired:;
@end

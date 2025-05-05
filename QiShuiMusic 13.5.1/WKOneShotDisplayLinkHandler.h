@interface WKOneShotDisplayLinkHandler : NSObject
- (id)initWithDrawingAreaProxy:;
- (void)displayLinkFired:;
- (void)dealloc;
- (void)setPreferredFramesPerSecond:;
- (void)schedule;
- (void)pause;
- (void)invalidate;
@end

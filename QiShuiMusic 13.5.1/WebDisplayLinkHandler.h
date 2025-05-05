@interface WebDisplayLinkHandler : NSObject
- (void)dealloc;
- (void)handleDisplayLink:;
- (void)setPaused:;
- (void)invalidate;
- (id)initWithMonitor:;
@end

@interface VCDisplayLink : VCObject
- (void)displayLinkTick:;
- (void)dealloc;
- (id)initWithHandler:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)deactivate;
- (BOOL)activate;
- (id)initWithHandler:threadPriority:threadOptions:threadIdentifier:;
- (BOOL)ensureDisplayIsReady;
- (void)handleWaitToRunTimeout;
- (void)runDisplayLinkThreadWithStopRequested:;
@end

@interface FigCaptureCMSessionMonitor : NSObject
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)invalidate;
- (id)_initWithFigCaptureCMSession:clientPID:observer:;
- (id)initWithCMSession:clientPID:observer:;
@end

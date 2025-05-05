@interface FigCaptureProprietaryDefaults : NSObject
- (id)initWithDefaultsChangedHandler:;
- (void)setObject:forKey:;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)stopObservingChangesForKey:;
- (id)objectForKey:;
- (void)observeChangesForKey:;
@end

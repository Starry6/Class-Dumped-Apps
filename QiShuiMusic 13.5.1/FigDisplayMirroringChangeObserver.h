@interface FigDisplayMirroringChangeObserver : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithPlayer:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)updatePlayerDisplayList;
- (void)removeReferenceToPlayer;
- (void)removeObserversOnCADisplays;
- (id)initWithCallback:context:;
- (void)setBaseDisplayList:;
- (void)removeCallback;
@end

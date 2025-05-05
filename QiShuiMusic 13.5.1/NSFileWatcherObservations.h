@interface NSFileWatcherObservations : NSObject
- (void)dealloc;
- (void)notifyObserver:;
- (void)addAttributeChange;
- (id)initWithPath:;
- (void)addAnnouncedMoveToPath:;
- (id)description;
- (void)addContentsChange;
- (void)addDetectedMoveToPath:;
- (void)addDeletion;
@end

@interface BRQueryItemProgressObserver : NSObject
@property (nonatomic) @? progressHandler;
@property (nonatomic) BRQueryItem item;
- (void)setProgressHandler:;
- (id)progressHandler;
- (id)item;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)_stopObserving;
- (void).cxx_destruct;
- (id)description;
- (void)setQueue:;
- (id)initWithItem:;
- (void)_subscribe;
@end

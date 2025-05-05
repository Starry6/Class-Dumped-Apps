@interface ISKVOProxy : NSObject
@property (nonatomic) <ISKVOProxyDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithTarget:keyPaths:identifier:delegate:;
- (void)startObservingTarget;
- (void)stopObservingTarget;
@end

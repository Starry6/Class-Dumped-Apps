@interface MPKeyValueObserver : NSObject
@property (nonatomic) @ object;
@property (nonatomic) NSString keyPath;
@property (nonatomic) @? handler;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)handler;
- (id)keyPath;
- (void).cxx_destruct;
- (id)object;
- (id)initWithObject:keyPath:options:handler:;
@end

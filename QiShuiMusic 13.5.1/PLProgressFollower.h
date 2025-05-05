@interface PLProgressFollower : NSObject
@property (nonatomic) NSProgress outputProgress;
@property (nonatomic) NSProgress sourceProgress;
- (void)dealloc;
- (id)sourceProgress;
- (id)initWithSourceProgress:progressHandler:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)setOutputProgress:;
- (void).cxx_destruct;
- (id)outputProgress;
- (void)invalidate;
@end

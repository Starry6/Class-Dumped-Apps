@interface BRProgressProxy : NSProgress
@property (nonatomic) <BRProgressProxyDelegate> delegate;
- (void)dealloc;
- (id)initWithURL:;
- (void)start;
- (void)setDelegate:;
- (void)stop;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)delegate;
- (void).cxx_destruct;
@end

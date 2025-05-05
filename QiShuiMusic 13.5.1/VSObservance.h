@interface VSObservance : NSObject
@property (nonatomic) BOOL observing;
@property (nonatomic) @ object;
@property (nonatomic) NSString keyPath;
@property (nonatomic) Q options;
@property (nonatomic) <VSObservanceDelegate> delegate;
- (id)init;
- (void)dealloc;
- (BOOL)isObserving;
- (void)setDelegate:;
- (void)startObserving;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)setObserving:;
- (id)initWithObject:keyPath:options:;
- (void)stopObserving;
- (unsigned long long)options;
- (id)delegate;
- (id)keyPath;
- (void).cxx_destruct;
- (id)object;
@end

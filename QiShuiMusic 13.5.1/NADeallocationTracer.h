@interface NADeallocationTracer : NSObject
@property (nonatomic) <NADeallocationTracerDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (id)initWithDelegate:;
@end

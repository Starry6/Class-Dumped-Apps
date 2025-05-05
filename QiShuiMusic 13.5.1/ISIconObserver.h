@interface ISIconObserver : NSObject
@property (nonatomic) <ISIconObserverDelegate> delegate;
- (void)dealloc;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)iconManager:didInvalidateIcons:;
@end

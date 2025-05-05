@interface NEPathEventObserver : NSObject
- (id)init;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:eventHandler:;
@end

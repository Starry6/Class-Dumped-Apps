@interface AWDObserver : NSObject
@property (nonatomic) <AWDObserverDelegate> delegate;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setConfiguration:callback:;
- (id).cxx_construct;
- (void)setDelegate:queue:;
@end

@interface FLItemChangeObserver : NSObject
- (void)dealloc;
- (void)timerUpdated;
- (void).cxx_destruct;
- (void)setItemChangeHandler:;
+ (id)observerWithChangeHandler:;
@end

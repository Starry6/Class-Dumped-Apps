@interface LSObserver : NSObject
@property (nonatomic) <LSObserverDelegate> delegate;
@property (nonatomic) NSOperationQueue queue;
@property (nonatomic) NSString name;
- (void)dealloc;
- (void)setName:;
- (void)_configureCallbacks;
- (void)setDelegate:;
- (void)startObserving;
- (void)stopObserving;
- (id)debugDescription;
- (id)delegate;
- (void)_tearDownCallbacks;
- (void).cxx_destruct;
- (id)description;
- (void)setQueue:;
- (id)name;
- (id)queue;
@end

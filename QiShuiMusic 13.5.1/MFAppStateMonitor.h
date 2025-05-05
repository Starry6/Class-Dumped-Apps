@interface MFAppStateMonitor : NSObject
@property (nonatomic) EFObservable appIsVisibleObservable;
@property (nonatomic) BOOL visible;
- (void)dealloc;
- (id)initWithBundleId:;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (id)appIsVisibleObservable;
+ (id)sharedInstance;
@end

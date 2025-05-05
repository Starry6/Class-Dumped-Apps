@interface CKResourceMonitorImpl : NSObject
@property (nonatomic) <CKResourceMonitorDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (void)injectMonitorImplementation:;
+ (void)trackEvent:params:;
+ (id)sharedManager;
@end

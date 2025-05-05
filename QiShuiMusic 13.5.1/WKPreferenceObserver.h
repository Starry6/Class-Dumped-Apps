@interface WKPreferenceObserver : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)preferenceDidChange:key:encodedValue:;
- (id).cxx_construct;
+ (id)sharedInstance;
@end

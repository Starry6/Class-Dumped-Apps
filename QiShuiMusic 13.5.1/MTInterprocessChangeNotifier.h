@interface MTInterprocessChangeNotifier : NSObject
- (void)dealloc;
- (void)stop;
- (void)notify;
- (void).cxx_destruct;
- (id)initWithIdentifier:onChange:;
+ (void)notify:;
+ (id)fullIdentifier:;
@end

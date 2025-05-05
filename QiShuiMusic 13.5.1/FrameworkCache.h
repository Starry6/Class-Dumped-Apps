@interface FrameworkCache : NSObject
- (void)handleNotification:;
- (id)init;
- (void)handleValue:forSelector:;
- (void)handleDisconnection;
- (void).cxx_destruct;
- (id)valueForSelector:;
+ (SEL)getCacheableSelectorForNotification:;
+ (unsigned char)getCachePolicyForSelector:;
@end

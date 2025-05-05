@interface CSJNextLoadMonitor : NSObject
@property (nonatomic) BUPersistence persistence;
- (void)recordAdShowWithSlot:material:;
- (id)persistence;
- (void)setPersistence:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end

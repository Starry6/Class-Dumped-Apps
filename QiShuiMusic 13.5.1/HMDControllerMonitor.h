@interface HMDControllerMonitor : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> pageQueue;
@property (nonatomic) NSMutableDictionary pageTimeDictionary;
@property (nonatomic) <HMDControllerMonitorDelegate> delegate;
- (void)addControllerMonitorWithPageName:methodSelector:timeInterval:isFirstOpen:;
- (id)getControllerMonitorBlockList;
- (id)pageQueue;
- (id)pageTimeDictionary;
- (void)setPageQueue:;
- (void)setPageTimeDictionary:;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)allocWithZone:;
+ (id)sharedInstance;
@end

@interface AWESearchPopViewsHandler : NSObject
@property (nonatomic) NSMutableDictionary popTaskMap;
@property (nonatomic) NSMutableDictionary lynxPopMap;
@property (nonatomic) NSMutableArray popArr;
@property (nonatomic) UIViewController<AWESearchPopContainerViewProtocol> currentViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerTaskHandler:withPopName:;
- (void)addPopInfoWithDataArr:withChannel:;
- (void)removeTaskWithType:withPopId:;
- (id)fetchCouponInfo:;
- (void)registerLynxPopTask:withPopId:;
- (id)popTaskMap;
- (id)lynxPopMap;
- (id)fetchLynxPopTaskWithPopId:;
- (id)reRrankAllPopTask:;
- (void)addAlertsWithPopArr:channel:;
- (void)addAlertWithPopInfo:;
- (id)fetchTaskHandlerWithPopName:;
- (id)fetchContainerViewController;
- (id)initWithDataArr:;
- (id)popArr;
- (void)setPopArr:;
- (void)setPopTaskMap:;
- (void)setLynxPopMap:;
- (id)init;
- (void).cxx_destruct;
- (id)currentViewController;
- (void)setCurrentViewController:;
+ (id)sharedManager;
@end

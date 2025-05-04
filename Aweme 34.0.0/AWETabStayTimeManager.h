@interface AWETabStayTimeManager : NSObject
@property (nonatomic) AWETabStayTimeManagerImpl managerImpl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)endBottomTabTimingWithTabId:;
- (void)startBottomTabTimingWithTabId:;
- (void)endTopTabTimingWithTabId:;
- (void)startTopTabTimingWithTabId:;
- (void)endTiming;
- (long long)getLastTimeTabStayTimeWithTabId:;
- (long long)getThisTimeTabStayTimeWithTabId:;
- (void)initImpl;
- (void)setManagerImpl:;
- (id)managerImpl;
- (id)init;
- (void).cxx_destruct;
- (void)startTiming;
+ (id)sharedInstance;
@end

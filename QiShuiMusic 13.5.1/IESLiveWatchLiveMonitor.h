@interface IESLiveWatchLiveMonitor : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) <IESLiveUserService> userService;
- (void)setUserService:;
- (id)allowEventListForTrace;
- (id)attachingDIContext;
- (id)userService;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
+ (void)monitorAndCheckWithEventName:preEvent:useTrace:moduleKey:;
+ (void)monitorBannerWithEvent:preEvent:useTrace:;
+ (void)monitorCleanScreenWithEvent:preEvent:useTrace:;
+ (void)monitorLongPressWithEvent:preEvent:useTrace:;
+ (void)monitorMediaLinkWithEvent:preEvent:useTrace:;
+ (void)monitorMoreToolsWithEvent:preEvent:useTrace:;
+ (void)monitorShareWithEvent:preEvent:useTrace:;
+ (void)monitorToolbarWithEvent:preEvent:useTrace:;
+ (void)monitorWithEvent:preEvent:useTrace:;
+ (void)monitorWithEvent:preEvent:useTrace:onlyKeepALog:;
@end

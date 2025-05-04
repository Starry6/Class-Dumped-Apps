@interface AWEFeedInteractiveVideoLinkMonitor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)monitorEventName:status:params:;
+ (void)monitorShowEventWithStatus:params:;
+ (void)monitorStartPlayEventWithParams:;
+ (void)monitorClickEventWithParams:;
+ (void)monitorEnterActivitPageWithParams:;
+ (void)monitorCloseEventWithParams:;
@end

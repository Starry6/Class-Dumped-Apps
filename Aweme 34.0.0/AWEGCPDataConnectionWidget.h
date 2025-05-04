@interface AWEGCPDataConnectionWidget : IESGCPBaseWidget
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didReceiveFollowUserResponse:context:error:;
- (void)removeNotification;
- (void)registNotification;
- (void)beforeResetVideoContainer:;
- (void)handleDigg:;
- (void)handleShare:;
- (id)transformToConnectionModelFromAwemeModel:action:;
- (void)handleWatchDuration;
- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (void)handleComment:;
+ (BOOL)widgetShouldBeActivated;
@end

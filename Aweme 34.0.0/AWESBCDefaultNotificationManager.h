@interface AWESBCDefaultNotificationManager : NSObject
@property (nonatomic) <AWESBCDefaultNotificationManagerBizProtocol> impl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)pushSBCCouldHandleWithMsg:payload:businessType:;
- (void)p_showPush:;
- (BOOL)p_checkIsPublish:;
- (id)aAWEPushSBCNotificationManagerAdapter;
- (id)impl;
- (id)init;
- (void).cxx_destruct;
- (void)setImpl:;
+ (void)_aweLazyRegisterStaticLoad;
+ (Class)aAWEPushSBCNotificationManagerAdapterClass;
+ (id)sharedInstance;
@end

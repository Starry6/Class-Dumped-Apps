@interface AWEConcernLynxCommonManager : NSObject
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishPushUpdateUser:;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishHidePostFromHer:status:;
- (void)unbindLynxMessage;
- (void)bindLynxMessage;
- (void)onVideoFavoriteNotification:;
- (void)sendFollowStatusChangeEvent:status:;
- (void)sendEvent:WithUserID:;
- (id)init;
- (void)dealloc;
- (id)subscriber;
- (void)setSubscriber:;
- (void).cxx_destruct;
+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;
@end

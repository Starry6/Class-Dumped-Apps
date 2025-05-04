@interface AWEIMLiveCustomServiceManager : NSObject
@property (nonatomic) NSHashTable liveDelegates;
- (void)asyncGetCurrentUnReadCount:role:completion:;
- (id)getLiveCustomServiceChatFrom:;
- (void)pushCustomServiceHalfScreenChatInAppPush:;
- (void)markLastMessageVCDeactive:;
- (id)customServiceViewController:needFloat:isInLive:extra:;
- (id)liveDelegates;
- (BOOL)haveLiveDelegate;
- (id)customServiceViewController:needFloat:isInLive:token:scene:openPlatformSource:extra:;
- (void)pushCustomServiceBoxListVC:role:spUid:extra:;
- (void)addLiveDelegate:;
- (void)updateUnReadCount:totalCount:;
- (void)pushCustomServiceChatWithSPUid:extra:token:scene:openPlatformSource:completion:;
- (void)pushCustomServiceChatWithSPUid:extra:completion:;
- (void)dismissTopIMChatVCIfNeeded;
- (void)pushCustomServiceBoxListVCInLiveForSpuid:extra:;
- (id)serviceRoleExtraInfo:;
- (id)displaySenderNameForMessage:;
- (void)setLiveDelegates:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)featureEnable;
+ (void)p_pushHalfWithContainer:isInLive:;
+ (id)sharedManager;
@end

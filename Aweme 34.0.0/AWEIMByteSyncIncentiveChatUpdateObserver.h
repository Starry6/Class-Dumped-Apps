@interface AWEIMByteSyncIncentiveChatUpdateObserver : NSObject
+ (void)registerByteSync;
+ (int)byteSyncBusinessID;
+ (void)rerouteWithMessage:loginUid:serverPushTime:;
+ (void)p_handleRelationReloadMessage:loginUid:serverPushTime:;
+ (void)handleChatProgressData:loginUid:serverPushTime:;
+ (void)handleChatActivationData:loginUID:serverPushTime:;
+ (void)handleActivityExitData:;
@end

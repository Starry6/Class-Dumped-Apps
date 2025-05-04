@interface AWEECOMIMPaasInterfaceBridge : NSObject
+ (id)createConversationBridgeWithIdentifier:belongClient:;
+ (id)createMessagesDataSourceOptions;
+ (id)createMessagesInConversationDataSourceBridgeWithInitialLocationLatestMessageForBizConversationID:options:belongClient:;
+ (id)createUpdateMessage;
+ (id)createMessageBridgeWithIdentifier:inConversation:belongClient:;
+ (long long)networkReachabilityStatusWithPigeonNetwork;
+ (id)createPigeonKVStoreWithName:;
+ (id)createClientConfig;
+ (id)createSendMessage;
+ (id)getSharedPigeonLog;
+ (void)getPigeonMonitorToTrackService:metric:category:extra:immediately:;
+ (id)getDefaultPigeonKVStore;
+ (id)createShopInfoFetchOptions;
+ (id)createSendUserEnterMessageRequestModel;
+ (id)pigeonClientUtilCreateParentChatConversationIDWithPigeonUID:pigeonShopID:pigeonBizType:;
+ (id)createEvaluateRequestModel;
+ (id)createMessageBridgeWithMessageServerID:inConversation:belongClient:;
+ (id)createClient;
@end

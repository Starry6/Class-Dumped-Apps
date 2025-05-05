@interface AWEIMFeedVideoCachePool : NSObject
+ (void)cancelRequestAwemeItemsWithIds:;
+ (void)cleanFeedCardMessageListForCid:;
+ (id)requestingCache;
+ (void)addCacheWithAwemeModels:;
+ (id)awemeModelForItemId:;
+ (void)cancelRequestAwemeItemsWithCell:;
+ (void)clearRequestCallBacks;
+ (id)feedCache;
+ (id)feedCardMessageWithCid:index:;
+ (void)getAwemeModelForItemId:canRequest:result:;
+ (void)p_requestAwemeItemsFromPool;
+ (void)p_requestAwemeModelForItemIds:results:;
+ (id)preRequestPool;
+ (id)publishAtFriendMessage;
+ (id)quoteMessageV2;
+ (id)quoteReplyFeedCardMessage;
+ (void)removeAwemeModelForItemId:;
+ (void)requestAwemeItemsWithIDs:passThroughParam:params:completion:;
+ (id)requestCallbackMaps;
+ (void)saveFeedCardMessageList:cid:;
+ (id)sceneParamsForRequestingVideoAtDM;
+ (void)setPublishAtFriendMessage:;
+ (void)setQuoteMessageV2:;
+ (void)setQuoteReplyFeedCardMessage:;
+ (void)tryRequestAwemeItemsWithCell:;
+ (void)tryRequestAwemeItemsWithIds:;
@end

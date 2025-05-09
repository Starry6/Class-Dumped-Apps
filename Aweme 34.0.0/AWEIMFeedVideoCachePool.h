@interface AWEIMFeedVideoCachePool : NSObject
@property (nonatomic) BOOL enableOutStreamDowngrade;
@property (nonatomic) BOOL enableRequestOptimize;
@property (nonatomic) q throttletime;
@property (nonatomic) IESIMFeedVisibilityCache visibilityCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)setEnableRequestOptimize:;
- (BOOL)enableRequestOptimize;
- (id)awemeModelForItemId:;
- (void)tryRequestAwemeItemsWithCell:requestScene:;
- (void)cancelRequestAwemeItemsWithCell:;
- (void)getAwemeModelForItemId:requestScene:canRequest:result:;
- (void)clearRequestCallBacks;
- (void)cleanFeedTypeMessageForCid:;
- (void)removeAllAwemeModel;
- (void)removeAwemeModelWithItemId:;
- (id)visibilityCache;
- (long long)throttletime;
- (void)beginFetchAwemesIfNeedWithRequestScene:;
- (void)preFetchAwemeModelsForItemIds:originType:requestScene:results:;
- (id)requestOriginTypeStrWithOriginType:;
- (BOOL)enableOutStreamDowngrade;
- (void)setEnableOutStreamDowngrade:;
- (void)setThrottletime:;
- (void)setVisibilityCache:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sceneParamsForRequestingVideoAtDM;
+ (id)quoteMessageV2;
+ (void)setQuoteMessageV2:;
+ (void)addCacheWithAwemeModels:;
+ (void)tryRequestAwemeItemsWithMessage:requestScene:;
+ (void)requestAwemeModelsForItemIds:requestScene:results:;
+ (void)tryRequestAwemeItemsWithIds:originType:requestScene:;
+ (void)tryRequestAwemeItemsWithIds:afterDelay:originType:requestScene:;
+ (id)preRequestPool;
+ (void)p_requestAwemeItemsFromPoolWithParams:;
+ (void)p_requestAwemeItemsFromPoolWithRequestScene:;
+ (void)cleanFeedCardMessageListForCid:;
+ (void)setQuoteReplyFeedCardMessage:;
+ (void)setPublishAtFriendMessage:;
+ (void)setItemToCacheWith:withItemId:;
+ (void)removeItemFromCacheWith:;
+ (void)removeAwemeModelForItemId:;
+ (void)removeAllItemFromCache;
+ (id)getItemFromCacheWith:;
+ (void)p_requestAwemeModelForItemIds:requestScene:results:;
+ (id)createidsFromAwemeItemids:;
+ (void)p_requestAwemeItemsFromPoolWithOriginType:requestScene:;
+ (void)p_requestAwemeModelForItemIds:requestScene:originType:results:;
+ (id)requestingCache;
+ (id)requestCallbackMaps;
+ (id)selectedCoIdWithAwemeIds:;
+ (id)profileUidWithAwemeIdDict;
+ (id)newFeedCache;
+ (void)tryRequestAwemeItemsWithIds:afterDelay:requestScene:;
+ (void)cancelRequestAwemeItemsWithIds:;
+ (void)generateMomentPreloadWithMessage:;
+ (void)preFetchAwemeVisibilityForItemId:requestScene:;
+ (void)tryRequestAwemeItemsWithIds:requestScene:;
+ (id)feedCache;
+ (void)saveFeedCardMessageList:cid:;
+ (id)feedCardMessageWithCid:index:;
+ (id)quoteReplyFeedCardMessage;
+ (id)publishAtFriendMessage;
+ (double)lastRequestTimeStampForItemID:;
+ (void)cancelRequestAwemeItemsWithMessage:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end

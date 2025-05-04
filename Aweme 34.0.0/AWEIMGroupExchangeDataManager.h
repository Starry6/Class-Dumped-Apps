@interface AWEIMGroupExchangeDataManager : NSObject
@property (nonatomic) YYMemoryCache cache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (id)batchInfoWithCid:batchID:;
- (void)updateBatchInfoList:inConversationID:source:;
- (void)writeCache:inCid:;
- (void)updateBatchInfoWithMessage:source:;
- (id)cacheKeyForCid:batchID:;
- (void)updateBatchInfoWithOnlineMessage:;
- (void)updateBatchInfoWithOfflineMessage:;
- (BOOL)updateBatchInfoWithRecall:dropUid:inCid:;
- (void)updateConversationID:globalVersion:;
- (long long)globalVersionWithConversationID:;
- (void)setCache:;
- (id)cache;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)writeDiskCache:inCid:;
+ (id)diskCacheWithBatchID:inCid:;
+ (id)diskCacheKeyWithCid:batchID:;
+ (void)cleanBatchInfoWithCid:;
@end

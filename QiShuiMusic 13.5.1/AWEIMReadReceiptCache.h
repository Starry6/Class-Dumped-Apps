@interface AWEIMReadReceiptCache : NSObject
@property (nonatomic) NSDictionary readReceiptModelMap;
@property (nonatomic) NSLock lock;
- (void)markAllHasDelay;
- (void)writeMemoryCacheOfReadReceipts:;
- (id)memoryCacheOfReadReceiptIdentifier:;
- (id)readReceiptModelMap;
- (void)removeMemoryCacheForConversationID:;
- (void)setReadReceiptModelMap:;
- (id)uncachedIdentifiersInSet:;
- (id)init;
- (id)lock;
- (void)clear;
- (void).cxx_destruct;
- (void)setLock:;
@end

@interface AWESearchAIGCStreamDataManager : NSObject
@property (nonatomic) NSMutableSet allKeys;
@property (nonatomic) NSMutableDictionary messageData;
- (void)setAllKeys:;
- (void)receiveStreamData:key:;
- (id)getCacheStreamKeys;
- (void)endHandleMessage;
- (id)init;
- (void)dealloc;
- (void)clearData;
- (void).cxx_destruct;
- (id)allKeys;
- (void)setMessageData:;
- (id)messageData;
+ (id)getAllMsgForKey:;
+ (id)readUnReadMsgForKey:markRead:;
+ (void)markReadWithDataList:;
+ (id)readUnReadMsgForKey:;
@end

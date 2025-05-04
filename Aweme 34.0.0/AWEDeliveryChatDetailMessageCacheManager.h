@interface AWEDeliveryChatDetailMessageCacheManager : NSObject
@property (nonatomic) NSMutableDictionary cardStateStorage;
- (void)setCardStateStorage:;
- (id)cardStateStorage;
- (void)setCardState:cardIdentifier:cardModel:;
- (id)getCardStateWithCardIdentifier:;
- (void)setLocalMediaFilePath:msgIdentifier:;
- (id)getLocalMediaFilePathWithMsgIdentifier:;
- (id)init;
- (void).cxx_destruct;
@end

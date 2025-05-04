@interface AWEECOMIMChatFoldEntryModel : NSObject
@property (nonatomic) AWEECOMIMFoldInfoModel foldInfo;
@property (nonatomic) <AWEECOMIMMsgCellDelegate> msgCellDelegate;
@property (nonatomic) <AWEECOMIMPaasConversationBridgeProtocol> curConversation;
@property (nonatomic) AWEECOMIMChatDetailMessageCacheManager messageCacheManager;
@property (nonatomic) AWEECOMShopDetailModel shopInfoModel;
@property (nonatomic) NSString pigeonBizType;
- (void)setPigeonBizType:;
- (id)pigeonBizType;
- (id)foldInfo;
- (void)setCurConversation:;
- (id)curConversation;
- (id)shopInfoModel;
- (void)setShopInfoModel:;
- (id)messageCacheManager;
- (void)setFoldInfo:;
- (void)setMessageCacheManager:;
- (void)setMsgCellDelegate:;
- (id)msgCellDelegate;
- (void).cxx_destruct;
@end

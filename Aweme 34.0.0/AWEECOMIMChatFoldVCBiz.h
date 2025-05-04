@interface AWEECOMIMChatFoldVCBiz : NSObject
@property (nonatomic) AWEECOMIMFoldInfoModel foldInfo;
@property (nonatomic) <AWEECOMIMMsgCellDelegate> msgCellDelegate;
@property (nonatomic) <AWEECOMIMPaasConversationBridgeProtocol> curConversation;
@property (nonatomic) AWEECOMIMChatDetailMessageCacheManager messageCacheManager;
@property (nonatomic) AWEECOMShopDetailModel shopInfoModel;
@property (nonatomic) NSString pigeonBizType;
@property (nonatomic) NSArray cellModelArr;
- (id)pigeonBizType;
- (id)foldInfo;
- (id)cellModelArr;
- (void)setCellModelArr:;
- (id)curConversation;
- (id)shopInfoModel;
- (id)messageCacheManager;
- (id)msgCellDelegate;
- (void)setupWithEntryModel:;
- (void).cxx_destruct;
@end

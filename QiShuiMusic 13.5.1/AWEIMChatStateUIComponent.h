@interface AWEIMChatStateUIComponent : NSObject
@property (nonatomic) <AWEIMChatListComponentCenter> componentCenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentCenter;
- (id)identifiersForReadReceiptChatsOnScreen;
- (void)msg_chatListNewCellShowedUp;
- (id)readReceiptIdentifiersNeedToBePulled;
- (void)refreshVisibleChatReadReceiptsFrom:;
- (void)setComponentCenter:;
- (id)init;
- (void).cxx_destruct;
@end

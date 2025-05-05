@interface IESIMMessageReadDataManager : NSObject
@property (nonatomic) IESSaaSTIMOMessageReadReceipt dataSource;
@property (nonatomic) IESSaaSTIMOConversationReadReceiptCallback readReceiptCallback;
@property (nonatomic) @? conversationReadReceiptUpdatedFromPushBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelReloadReadReceiptWithToken:;
- (id)conversationReadReceiptUpdatedFromPushBlock;
- (id)initWithConversationId:;
- (id)readReceiptCallback;
- (id)reloadReadReceiptForMessage:syncFromServer:withCompletion:;
- (void)setConversationReadReceiptUpdatedFromPushBlock:;
- (void)setReadReceiptCallback:;
- (void)setDataSource:;
- (id)dataSource;
- (void).cxx_destruct;
@end

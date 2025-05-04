@interface AWEIMChatListServiceMessageModel : NSObject
@property (nonatomic) NSString latestMessageID;
@property (nonatomic) q latestMessageCreateTime;
@property (nonatomic) NSString fromUID;
@property (nonatomic) NSInteger messageState;
@property (nonatomic) AWEIMChatListServiceReadReceiptModel readReceiptModel;
- (void)setLatestMessageCreateTime:;
- (void)setLatestMessageID:;
- (void)setMessageState:;
- (void)setFromUID:;
- (int)messageState;
- (id)fromUID;
- (id)latestMessageID;
- (long long)latestMessageCreateTime;
- (id)readReceiptModel;
- (void)setReadReceiptModel:;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end

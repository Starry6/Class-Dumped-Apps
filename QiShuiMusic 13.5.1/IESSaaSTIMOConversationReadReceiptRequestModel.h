@interface IESSaaSTIMOConversationReadReceiptRequestModel : NSObject
@property (nonatomic) <IESSaaSTIMMessageModelProtocol> message;
@property (nonatomic) q convShortID;
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSString messageID;
- (void)setConvShortID:;
- (long long)convShortID;
- (id)messageID;
- (void)setMessage:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessageID:;
- (id)conversationID;
- (void)setConversationID:;
+ (id)modelWithConvID:convShortID:messageID:;
@end

@interface AWEDeliveryEntryChatInfoModel : NSObject
@property (nonatomic) NSString deliveryId;
@property (nonatomic) NSString deliveryStatus;
@property (nonatomic) NSString pigeonBizType;
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString accountId;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setPigeonBizType:;
- (id)pigeonBizType;
- (id)deliveryId;
- (void)setDeliveryId:;
- (void)setDeliveryStatus:;
- (void).cxx_destruct;
- (id)accountId;
- (void)setAccountId:;
- (id)conversationId;
- (void)setConversationId:;
- (id)deliveryStatus;
+ (id)parseFromDict:;
@end

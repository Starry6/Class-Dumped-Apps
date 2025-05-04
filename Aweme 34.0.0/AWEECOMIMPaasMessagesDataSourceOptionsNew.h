@interface AWEECOMIMPaasMessagesDataSourceOptionsNew : NSObject
@property (nonatomic) BDECPigeonMessageDataSourceOptions messagesDataSourceOptions;
@property (nonatomic) NSNumber initialMessageCount;
@property (nonatomic) NSNumber messageCountPerPage;
@property (nonatomic) NSString pigeonBizType;
@property (nonatomic) NSInteger inbox;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initialMessageCount;
- (void)setInitialMessageCount:;
- (id)messageCountPerPage;
- (void)setMessageCountPerPage:;
- (void)setPigeonBizType:;
- (id)pigeonBizType;
- (id)convertToPigeonMessagesDataSourceOptions;
- (id)messagesDataSourceOptions;
- (void)setMessagesDataSourceOptions:;
- (id)init;
- (void).cxx_destruct;
- (int)inbox;
- (void)setInbox:;
@end

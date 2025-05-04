@interface AWEIMMixPhotoResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber playID;
@property (nonatomic) NSNumber messageID;
@property (nonatomic) NSString clientMessageID;
@property (nonatomic) NSNumber shouldDismissShootPage;
@property (nonatomic) NSNumber serverReceiveTime;
@property (nonatomic) NSNumber serverSendMessageTime;
- (void)setClientMessageID:;
- (id)clientMessageID;
- (id)playID;
- (void)setPlayID:;
- (id)shouldDismissShootPage;
- (void)setShouldDismissShootPage:;
- (id)serverReceiveTime;
- (id)serverSendMessageTime;
- (void)setServerReceiveTime:;
- (void)setServerSendMessageTime:;
- (id)messageID;
- (void)setMessageID:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

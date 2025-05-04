@interface AWECommentGeneralBusinessModel : NSObject
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString serviceID;
@property (nonatomic) NSNumber commentCountTotal;
@property (nonatomic) AWEUserModel author;
@property (nonatomic) AWEAwemeModel awemeInfo;
@property (nonatomic) NSString channelID;
@property (nonatomic) NSString channelObjID;
@property (nonatomic) NSDictionary businessParams;
- (id)awemeInfo;
- (id)commentCountTotal;
- (void)setCommentCountTotal:;
- (id)channelObjID;
- (void)setAwemeInfo:;
- (id)initWithItemID:serviceID:;
- (id)businessParams;
- (void)setBusinessParams:;
- (void)setChannelObjID:;
- (id)itemID;
- (id)author;
- (void)setItemID:;
- (void)setChannelID:;
- (void)setServiceID:;
- (id)channelID;
- (id)serviceID;
- (void).cxx_destruct;
- (void)setAuthor:;
@end

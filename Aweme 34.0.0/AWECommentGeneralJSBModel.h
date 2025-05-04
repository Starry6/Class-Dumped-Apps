@interface AWECommentGeneralJSBModel : NSObject
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString serviceID;
@property (nonatomic) NSNumber commentCountTotal;
@property (nonatomic) AWEUserModel author;
@property (nonatomic) AWEAwemeModel awemeInfo;
@property (nonatomic) AWECommentJSBConfig config;
@property (nonatomic) NSDictionary businessParams;
- (id)awemeInfo;
- (id)commentCountTotal;
- (void)setCommentCountTotal:;
- (void)setAwemeInfo:;
- (id)initWithItemID:serviceID:;
- (id)businessParams;
- (void)setBusinessParams:;
- (void)setConfig:;
- (id)itemID;
- (id)author;
- (void)setItemID:;
- (id)config;
- (void)setServiceID:;
- (id)serviceID;
- (void).cxx_destruct;
- (void)setAuthor:;
@end

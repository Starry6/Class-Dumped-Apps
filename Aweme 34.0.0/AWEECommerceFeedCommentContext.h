@interface AWEECommerceFeedCommentContext : NSObject
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString productID;
@property (nonatomic) NSString authorID;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSNumber commentCount;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setEnterFrom:;
- (void)setExtraParams:;
- (id)enterFrom;
- (id)extraParams;
- (id)itemID;
- (void)setProductID:;
- (void)setItemID:;
- (id)productID;
- (void).cxx_destruct;
- (id)commentCount;
- (void)setCommentCount:;
- (id)authorID;
- (void)setAuthorID:;
@end

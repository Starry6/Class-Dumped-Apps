@interface AWEShowEntertainmentCommentDataController : NSObject
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) AWEAwemeModel awemeModel;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setLogExtra:;
- (id)logExtra;
- (id)initWithAwemeModel:;
- (id)initWithAwemeModel:logExtra:;
- (id)getEntertainmentCommentTabRequestParams;
- (void)requestEntertainmentCommentTabData:;
- (void).cxx_destruct;
@end

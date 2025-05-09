@interface AWEOpenSearchMerchandiseVideoDetailParamModel : IESLiveBridgeModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString scene;
@property (nonatomic) BOOL enableLoadMore;
@property (nonatomic) NSNumber rank;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSDictionary bizParams;
@property (nonatomic) NSDictionary loadMoreInfo;
@property (nonatomic) NSArray awemeInfoList;
@property (nonatomic) NSNumber awemeIndex;
- (void)setLogExtra:;
- (id)logExtra;
- (void)setExtraParams:;
- (id)extraParams;
- (id)bizParams;
- (void)setBizParams:;
- (id)loadMoreInfo;
- (void)setLoadMoreInfo:;
- (void)setEnableLoadMore:;
- (BOOL)enableLoadMore;
- (id)awemeInfoList;
- (void)setAwemeInfoList:;
- (id)awemeIndex;
- (void)setAwemeIndex:;
- (void)setScene:;
- (id)scene;
- (id)rank;
- (void)setRank:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end

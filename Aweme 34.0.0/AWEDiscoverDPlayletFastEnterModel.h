@interface AWEDiscoverDPlayletFastEnterModel : NSObject
@property (nonatomic) NSString cacheID;
@property (nonatomic) NSString playletID;
@property (nonatomic) NSString referString;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) BOOL isFromSeriesAwemeApi;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSArray awemeModels;
@property (nonatomic) q inititalIndex;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setReferString:;
- (void)setLogExtra:;
- (id)logExtra;
- (id)playletID;
- (id)awemeModels;
- (void)setPlayletID:;
- (void)setAwemeModels:;
- (id)createDataController;
- (id)cacheID;
- (BOOL)isFromSeriesAwemeApi;
- (void)setCacheID:;
- (id)p_createDataControllerOfAwemeArray;
- (id)p_createDataControllerOfAwemeModel;
- (void)trackerError:type:;
- (void)setIsFromSeriesAwemeApi:;
- (long long)inititalIndex;
- (void)setInititalIndex:;
- (void).cxx_destruct;
@end

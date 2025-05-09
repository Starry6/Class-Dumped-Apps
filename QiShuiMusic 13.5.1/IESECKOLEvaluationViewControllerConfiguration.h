@interface IESECKOLEvaluationViewControllerConfiguration : NSObject
@property (nonatomic) NSString productID;
@property (nonatomic) BOOL shopBinding;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString clickVideoID;
@property (nonatomic) NSString videoIDs;
@property (nonatomic) NSString detailVideoID;
@property (nonatomic) NSDictionary trackerParams;
@property (nonatomic) BOOL hideHeader;
@property (nonatomic) NSString kolLynxUrl;
- (void)setShopBinding:;
- (id)clickVideoID;
- (id)detailVideoID;
- (id)enterFrom;
- (BOOL)isShopBinding;
- (id)kolLynxUrl;
- (void)setClickVideoID:;
- (void)setDetailVideoID:;
- (void)setEnterFrom:;
- (void)setKolLynxUrl:;
- (void)setTrackerParams:;
- (void)setVideoIDs:;
- (id)trackerParams;
- (id)videoIDs;
- (id)productID;
- (void)setProductID:;
- (void).cxx_destruct;
- (id)initWithProductID:;
- (void)setHideHeader:;
- (BOOL)hideHeader;
@end

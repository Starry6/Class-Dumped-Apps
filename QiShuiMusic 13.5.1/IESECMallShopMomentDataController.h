@interface IESECMallShopMomentDataController : NSObject
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) q lastCursor;
@property (nonatomic) q cursor;
@property (nonatomic) NSDictionary passThroughParams;
@property (nonatomic) NSString feedback;
- (void)initFetch:metricsBlock:extraParams:;
- (BOOL)isRequestOnAir;
- (long long)lastCursor;
- (void)loadMore:metricsBlock:extraParams:;
- (id)passThroughParams;
- (void)requestData:metricsBlock:extraParams:;
- (void)setIsRequestOnAir:;
- (void)setLastCursor:;
- (void)setPassThroughParams:;
- (long long)cursor;
- (void)setCursor:;
- (id)feedback;
- (void).cxx_destruct;
- (void)setFeedback:;
@end

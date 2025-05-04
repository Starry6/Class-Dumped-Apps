@interface AWESearchLifeServiceLiveRequestParams : AWESearchLiveCachalotRequestParams
@property (nonatomic) BOOL hasSearched;
@property (nonatomic) NSString strSaleChannel;
@property (nonatomic) NSString strLifeTheme;
@property (nonatomic) NSDictionary commonOnceParams;
@property (nonatomic) NSDictionary commonPassWithFilterParams;
@property (nonatomic) NSDictionary commonAllTimeParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasSearched;
- (void)setHasSearched:;
- (id)generateParams;
- (id)strSaleChannel;
- (id)strLifeTheme;
- (id)commonOnceParams;
- (id)commonPassWithFilterParams;
- (id)commonAllTimeParams;
- (void)setStrSaleChannel:;
- (void)setStrLifeTheme:;
- (void)setCommonOnceParams:;
- (void)setCommonPassWithFilterParams:;
- (void)setCommonAllTimeParams:;
- (void).cxx_destruct;
@end

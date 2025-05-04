@interface AWESearchLifeServiceVideoRequestParams : AWESearchLifeServiceBaseRequestParams
@property (nonatomic) NSString strLifeTheme;
@property (nonatomic) NSDictionary commonOnceParams;
@property (nonatomic) NSDictionary commonPassWithFilterParams;
@property (nonatomic) NSDictionary commonAllTimeParams;
- (id)generateParams;
- (id)strLifeTheme;
- (id)commonOnceParams;
- (id)commonPassWithFilterParams;
- (id)commonAllTimeParams;
- (void)setStrLifeTheme:;
- (void)setCommonOnceParams:;
- (void)setCommonPassWithFilterParams:;
- (void)setCommonAllTimeParams:;
- (void).cxx_destruct;
@end

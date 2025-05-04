@interface AWESearchSeedResultRequestParams : AWESearchVerticalRequestParams
@property (nonatomic) NSDictionary currFilterExtraParams;
@property (nonatomic) NSDictionary fetchExtraParams;
@property (nonatomic) NSDictionary refreshExtraParams;
- (id)refreshParams;
- (id)loadMoreParams;
- (void)setRefreshExtraParams:;
- (id)refreshExtraParams;
- (void)setFetchExtraParams:;
- (void)setCurrFilterExtraParams:;
- (id)fetchExtraParams;
- (id)currFilterExtraParams;
- (void).cxx_destruct;
@end

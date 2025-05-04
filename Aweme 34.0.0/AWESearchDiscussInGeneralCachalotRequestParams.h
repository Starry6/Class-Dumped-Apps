@interface AWESearchDiscussInGeneralCachalotRequestParams : AWEGeneralCachalotRequestParams
@property (nonatomic) NSString fromGroupId;
@property (nonatomic) NSString backtrace;
- (void)setFromGroupId:;
- (id)fromGroupId;
- (id)refreshParams;
- (id)loadMoreParams;
- (id)generateParams;
- (id)raw_searchPublicParams;
- (id)raw_paramsWithCustomParams:;
- (id)raw_generateParams;
- (id)raw_loadMoreParams;
- (id)raw_refreshParams;
- (id)backtrace;
- (id)init;
- (void).cxx_destruct;
- (void)setBacktrace:;
@end

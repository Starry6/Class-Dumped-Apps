@interface AWEGeneralCachalotRequestParams : AWESearchVerticalRequestParams
@property (nonatomic) Q refreshType;
@property (nonatomic) <AWESearchGeneralCachalotRequestParamsDelegate> delegate;
@property (nonatomic) NSString sendBackList;
- (id)refreshParams;
- (id)loadMoreParams;
- (id)generateParams;
- (id)sendBackList;
- (void)setSendBackList:;
- (BOOL)enablePreserveExtraParam;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setRefreshType:;
- (unsigned long long)refreshType;
@end

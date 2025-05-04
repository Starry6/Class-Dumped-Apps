@interface AWESearchUserCachalotRequestParams : AWESearchVerticalRequestParams
@property (nonatomic) <AWESearchUserCachalotRequestParamsDelegate> delegate;
- (id)refreshParams;
- (id)loadMoreParams;
- (id)generateParams;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (BOOL)fixCursorParams;
@end

@interface AWESearchVideoCachalotRequestParams : AWESearchVerticalRequestParams
@property (nonatomic) <AWESearchVideoCachalotRequestParamsDelegate> delegate;
- (id)refreshParams;
- (id)loadMoreParams;
- (id)generateParams;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (BOOL)isVideoTabWaterfall;
+ (BOOL)fixCursorParams;
@end

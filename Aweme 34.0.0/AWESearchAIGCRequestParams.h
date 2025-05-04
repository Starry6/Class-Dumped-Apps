@interface AWESearchAIGCRequestParams : AWESearchVerticalRequestParams
@property (nonatomic) <AWESearchAIGCRequestParamsDelegate> delegate;
- (id)refreshParams;
- (id)loadMoreParams;
- (id)generateParams;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end

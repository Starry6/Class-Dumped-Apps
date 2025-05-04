@interface AWESearchDiscussRequestParams : AWESearchVerticalRequestParams
@property (nonatomic) NSString customSearchSource;
@property (nonatomic) NSString fromGroupId;
@property (nonatomic) NSString backtrace;
@property (nonatomic) BOOL isTabSwitching;
- (void)setFromGroupId:;
- (id)fromGroupId;
- (id)loadMoreParams;
- (id)generateParams;
- (id)customSearchSource;
- (void)setIsTabSwitching:;
- (BOOL)isTabSwitching;
- (void)setCustomSearchSource:;
- (id)backtrace;
- (id)init;
- (void).cxx_destruct;
- (void)setBacktrace:;
@end

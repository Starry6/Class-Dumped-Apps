@interface AWEPOIModalPageModel : NSObject
@property (nonatomic) double topOffset;
@property (nonatomic) q pageSize;
@property (nonatomic) BOOL tapBlankToClose;
@property (nonatomic) AWEPOIModalPageModel prePage;
@property (nonatomic) AWEPOIModalPageModel nextPage;
@property (nonatomic) BOOL contentScrollEnabled;
- (id)prePage;
- (void)setPrePage:;
- (BOOL)hasPrePageSizeAndNotSelf;
- (BOOL)hasNextPageSizeAndNotSelf;
- (BOOL)contentScrollEnabled;
- (BOOL)tapBlankToClose;
- (void)setTapBlankToClose:;
- (id)initWithPageSize:contentScrollEnabled:;
- (void)setContentScrollEnabled:;
- (void)setTopOffset:;
- (double)topOffset;
- (void).cxx_destruct;
- (id)initWithPageSize:;
- (long long)pageSize;
- (void)setPageSize:;
- (id)nextPage;
- (void)setNextPage:;
+ (double)pageHeightForPageSize:;
+ (long long)pageSizeForPageHeight:;
@end

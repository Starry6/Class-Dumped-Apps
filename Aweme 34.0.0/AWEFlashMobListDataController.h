@interface AWEFlashMobListDataController : AWEListDataController
@property (nonatomic) NSString flashMobID;
@property (nonatomic) q cursor;
- (void)initFetchWithCompletion:;
- (void)loadMoreWithFilteredCompletion:;
- (void)setFlashMobID:;
- (id)flashMobID;
- (id)initWithFlashMobID:;
- (long long)cursor;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
+ (id)generateAwemeModelList:;
@end

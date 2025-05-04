@interface AWESearchGoodsSearchWordView : UIView
@property (nonatomic) <AWESearchWordProtocol> delegate;
@property (nonatomic) NSMutableArray wordViewArray;
@property (nonatomic) AWESearchMerchandisSearchWordRegion searchWordInfo;
@property (nonatomic) NSDictionary searchInfoDict;
- (id)searchWordInfo;
- (void)setSearchWordInfo:;
- (void)setSearchInfoDict:;
- (id)searchInfoDict;
- (void)setupWordView;
- (id)wordViewArray;
- (void)setupBgView:::;
- (void)setWordViewArray:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
+ (double)searchWordHeight;
@end

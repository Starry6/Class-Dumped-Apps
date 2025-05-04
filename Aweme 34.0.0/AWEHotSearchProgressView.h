@interface AWEHotSearchProgressView : UIView
@property (nonatomic) q lastIndex;
@property (nonatomic) q lastTotalCount;
@property (nonatomic) NSMutableArray dotsArray;
@property (nonatomic) NSMutableArray sevenStateArray;
@property (nonatomic) NSMutableArray fiveStateArray;
@property (nonatomic) NSMutableArray currentStateArray;
- (void)configureUI;
- (void)updateStateWithCurrentIndex:totalPageCount:animated:;
- (id)currentStateArray;
- (id)sevenStateArray;
- (void)setCurrentStateArray:;
- (id)dotsArray;
- (id)fiveStateArray;
- (void)updateFiveStateArrayWithCurrentIndex:totalPageCount:;
- (BOOL)shouldChangeStateArrayWithTotalPageCount:;
- (void)calculateHiddenStateOfEachDotWithCurrentIndex:totalPageCount:;
- (long long)lastTotalCount;
- (void)setLastTotalCount:;
- (void)setDotsArray:;
- (void)setSevenStateArray:;
- (void)setFiveStateArray:;
- (id)init;
- (void).cxx_destruct;
- (long long)lastIndex;
- (void)setLastIndex:;
@end

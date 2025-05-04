@interface AWEPadLeftSideBarWatchHistoryHeaderUIConfig : NSObject
@property (nonatomic) double headerHeight;
@property (nonatomic) BOOL hasDivideLine;
@property (nonatomic) UIFont titleFont;
@property (nonatomic) double titleTopMargin;
@property (nonatomic) BOOL fixShowAllButtonWidth;
@property (nonatomic) UIFont subTitleFont;
- (BOOL)hasDivideLine;
- (void)setHasDivideLine:;
- (void)setTitleTopMargin:;
- (BOOL)fixShowAllButtonWidth;
- (void)setFixShowAllButtonWidth:;
- (double)headerHeight;
- (void)setTitleFont:;
- (id)titleFont;
- (void).cxx_destruct;
- (void)setHeaderHeight:;
- (void)setSubTitleFont:;
- (id)subTitleFont;
- (double)titleTopMargin;
@end

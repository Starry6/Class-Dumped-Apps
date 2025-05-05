@interface MJRefreshAutoStateFooter : MJRefreshAutoFooter
@property (nonatomic) NSMutableDictionary stateTitles;
@property (nonatomic) double labelLeftInset;
@property (nonatomic) UILabel stateLabel;
@property (nonatomic) BOOL refreshingTitleHidden;
- (void)stateLabelClick;
- (void)setStateTitles:;
- (void)i18nDidChange;
- (BOOL)isRefreshingTitleHidden;
- (double)labelLeftInset;
- (void)placeSubviews;
- (void)setLabelLeftInset:;
- (void)setRefreshingTitleHidden:;
- (id)stateTitles;
- (void)setState:;
- (id)setTitle:forState:;
- (void)prepare;
- (void).cxx_destruct;
- (void)textConfiguration;
- (id)stateLabel;
@end

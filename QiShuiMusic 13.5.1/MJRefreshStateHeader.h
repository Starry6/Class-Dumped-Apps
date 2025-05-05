@interface MJRefreshStateHeader : MJRefreshHeader
@property (nonatomic) NSMutableDictionary stateTitles;
@property (nonatomic) @? lastUpdatedTimeText;
@property (nonatomic) UILabel lastUpdatedTimeLabel;
@property (nonatomic) double labelLeftInset;
@property (nonatomic) UILabel stateLabel;
- (void)setStateTitles:;
- (void)i18nDidChange;
- (double)labelLeftInset;
- (id)lastUpdatedTimeLabel;
- (id)lastUpdatedTimeText;
- (id)modifyLastUpdatedTimeText:;
- (void)placeSubviews;
- (void)setLabelLeftInset:;
- (void)setLastUpdatedTimeKey:;
- (void)setLastUpdatedTimeText:;
- (id)stateTitles;
- (void)setState:;
- (id)setTitle:forState:;
- (void)prepare;
- (void).cxx_destruct;
- (void)textConfiguration;
- (id)stateLabel;
@end

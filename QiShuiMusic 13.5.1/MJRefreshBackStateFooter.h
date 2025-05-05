@interface MJRefreshBackStateFooter : MJRefreshBackFooter
@property (nonatomic) NSMutableDictionary stateTitles;
@property (nonatomic) double labelLeftInset;
@property (nonatomic) UILabel stateLabel;
- (void)setStateTitles:;
- (void)i18nDidChange;
- (double)labelLeftInset;
- (void)placeSubviews;
- (void)setLabelLeftInset:;
- (id)stateTitles;
- (void)setState:;
- (id)setTitle:forState:;
- (void)prepare;
- (void).cxx_destruct;
- (id)titleForState:;
- (void)textConfiguration;
- (id)stateLabel;
@end

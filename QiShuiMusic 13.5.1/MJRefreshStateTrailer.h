@interface MJRefreshStateTrailer : MJRefreshTrailer
@property (nonatomic) NSMutableDictionary stateTitles;
@property (nonatomic) UILabel stateLabel;
- (void)setStateTitles:;
- (void)i18nDidChange;
- (void)placeSubviews;
- (id)stateTitles;
- (void)setState:;
- (id)setTitle:forState:;
- (void)prepare;
- (void).cxx_destruct;
- (void)textConfiguration;
- (id)stateLabel;
@end

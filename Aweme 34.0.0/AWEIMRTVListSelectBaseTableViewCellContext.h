@interface AWEIMRTVListSelectBaseTableViewCellContext : NSObject
@property (nonatomic) Q awemeUpdateCount;
@property (nonatomic) BOOL couldSelected;
@property (nonatomic) BOOL changeToSelect;
@property (nonatomic) BOOL searching;
@property (nonatomic) BOOL multiSelect;
@property (nonatomic) double lastActiveTime;
@property (nonatomic) BOOL online;
@property (nonatomic) NSString onlineIndicatorText;
@property (nonatomic) BOOL hideFriendLabel;
- (void)setLastActiveTime:;
- (id)onlineIndicatorText;
- (unsigned long long)awemeUpdateCount;
- (BOOL)couldSelected;
- (BOOL)changeToSelect;
- (BOOL)hideFriendLabel;
- (id)initWithUpdateCount:couldSelected:changeToSelect:searching:multiSelect:lastActiveTime:hideFriendLabel:;
- (void)setAwemeUpdateCount:;
- (void)setCouldSelected:;
- (void)setChangeToSelect:;
- (void)setHideFriendLabel:;
- (BOOL)isSearching;
- (BOOL)isOnline;
- (void).cxx_destruct;
- (void)setSearching:;
- (void)setMultiSelect:;
- (double)lastActiveTime;
- (BOOL)isMultiSelect;
@end

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
- (BOOL)hideFriendLabel;
- (unsigned long long)awemeUpdateCount;
- (BOOL)changeToSelect;
- (BOOL)couldSelected;
- (id)initWithUpdateCount:couldSelected:changeToSelect:searching:multiSelect:lastActiveTime:hideFriendLabel:;
- (id)onlineIndicatorText;
- (void)setAwemeUpdateCount:;
- (void)setChangeToSelect:;
- (void)setCouldSelected:;
- (void)setHideFriendLabel:;
- (BOOL)isSearching;
- (void).cxx_destruct;
- (BOOL)isOnline;
- (void)setSearching:;
- (void)setMultiSelect:;
- (double)lastActiveTime;
- (void)setLastActiveTime:;
- (BOOL)isMultiSelect;
@end

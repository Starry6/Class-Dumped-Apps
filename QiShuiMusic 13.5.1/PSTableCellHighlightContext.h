@interface PSTableCellHighlightContext : NSObject
@property (nonatomic) UITableViewCell cell;
@property (nonatomic) BOOL animateUnhighlight;
@property (nonatomic) q originalSelectionStyle;
@property (nonatomic) BOOL valid;
- (void)dealloc;
- (BOOL)valid;
- (void)_timerFired;
- (void)_killTimer;
- (void).cxx_destruct;
- (void)invalidate;
- (id)cell;
- (void)setCell:;
- (void)performHighlightForDuration:animateUnhighlight:;
- (BOOL)animateUnhighlight;
- (long long)originalSelectionStyle;
- (void)setOriginalSelectionStyle:;
+ (id)contextWithCell:;
@end

@interface VMUProgressBar : NSObject
- (void).cxx_destruct;
- (void)setTitle:withTotalItems:;
- (void)updateItemName:;
- (void)itemCompleteWithStatus:;
- (void)colorize:;
- (void)_printProgressBar;
@end

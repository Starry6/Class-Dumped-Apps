@interface UIPrintScaleDownOnlyOption : UIPrintOption
- (id)summary;
- (BOOL)shouldShow;
- (void)updateValue:;
- (id)printOptionTableViewCell;
@end

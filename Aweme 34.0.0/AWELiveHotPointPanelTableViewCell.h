@interface AWELiveHotPointPanelTableViewCell : AWEHotPointPanelTableViewCell
- (void)configureUI;
- (void)configureWithModel:indexPath:inChannel:needNewDesc:;
- (BOOL)shouldShowCustomizedLabel;
- (void)configRelatedLabel:;
+ (id)reuseIdentifier;
+ (double)cellHeight;
@end

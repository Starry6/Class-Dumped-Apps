@interface AWETableViewCell : UITableViewCell
- (void)setCellDelegate:;
- (void)updateWithViewModel:;
+ (id)dequeueReusableCellWithTableView:cellClass:;
@end

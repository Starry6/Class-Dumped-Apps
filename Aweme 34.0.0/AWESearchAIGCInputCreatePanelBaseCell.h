@interface AWESearchAIGCInputCreatePanelBaseCell : UITableViewCell
- (id)initWithStyle:reuseIdentifier:;
- (void)updateWithModel:;
+ (double)viewHeightWithViewModel:;
+ (id)identifier;
@end

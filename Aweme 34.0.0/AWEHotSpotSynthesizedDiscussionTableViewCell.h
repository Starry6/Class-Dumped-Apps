@interface AWEHotSpotSynthesizedDiscussionTableViewCell : UITableViewCell
@property (nonatomic) UIViewController<AWEHotSpotSynthesizedDiscussionCellViewControllerProtocol> cellViewController;
- (void)setCellViewController:;
- (id)cellViewController;
- (void)configWithViewController:;
- (void)p_setupBasicUI;
- (void)prepareForReuse;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
@end

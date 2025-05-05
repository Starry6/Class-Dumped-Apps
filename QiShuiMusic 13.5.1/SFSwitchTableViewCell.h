@interface SFSwitchTableViewCell : UITableViewCell
@property (nonatomic) <SFSwitchTableViewCellDelegate> delegate;
@property (nonatomic) BOOL switchOn;
- (id)initWithReuseIdentifier:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_switchViewStateDidChange:;
- (void)setSwitchOn:;
- (BOOL)isSwitchOn;
@end

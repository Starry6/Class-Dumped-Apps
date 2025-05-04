@interface AWEShareActionCell : UITableViewCell
@property (nonatomic) AWEShareSaveAlertButton button;
@property (nonatomic) AWEShareActionCellModel cellModel;
@property (nonatomic) <AWEShareActionCellDelegate> delegate;
@property (nonatomic) <AWEShareSaveTableViewCellDelegate> shareDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCellModel:;
- (id)delegate;
- (void)setButton:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)button;
- (void)actionButtonTapped:;
- (void)updateWithViewModel:;
- (id)cellModel;
@end

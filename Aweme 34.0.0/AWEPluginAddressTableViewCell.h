@interface AWEPluginAddressTableViewCell : UITableViewCell
@property (nonatomic) UIImageView selectView;
@property (nonatomic) UIImageView editImgView;
@property (nonatomic) <AWEAddressTableViewCellDelegate> delegate;
- (void)setSelectView:;
- (id)selectView;
- (void)initCellComponent;
- (void)editBtnClick;
- (void)setSeperatorHidden:;
- (id)editImgView;
- (void)setEditImgView:;
- (void)setModel:;
- (id)delegate;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (double)calculateCellHeightForModel:;
+ (id)getAddressStringWithModel:;
@end

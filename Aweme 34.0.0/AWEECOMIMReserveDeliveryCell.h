@interface AWEECOMIMReserveDeliveryCell : UICollectionViewCell
@property (nonatomic) DUXCheckBox checkBox;
@property (nonatomic) UILabel dateLabel;
@property (nonatomic) AWEECOMIMShopOrderCalendarItem model;
@property (nonatomic) BOOL checked;
- (id)checkBox;
- (void)setCheckBox:;
- (void)setModel:;
- (id)initWithFrame:;
- (void)setChecked:;
- (BOOL)checked;
- (id)model;
- (void).cxx_destruct;
- (id)dateLabel;
- (BOOL)isChecked;
- (void)setDateLabel:;
@end

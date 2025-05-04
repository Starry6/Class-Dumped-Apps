@interface AWEElderModeAlertViewModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString leftBtnText;
@property (nonatomic) NSString rightBtnText;
@property (nonatomic) NSArray itemText;
@property (nonatomic) NSArray itemIcon;
- (id)leftBtnText;
- (void)setLeftBtnText:;
- (id)rightBtnText;
- (void)setRightBtnText:;
- (id)itemIcon;
- (void)setItemIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)itemText;
- (void)setItemText:;
@end

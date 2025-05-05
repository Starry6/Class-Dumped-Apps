@interface PSSpinnerRecord : NSObject
@property (nonatomic) NSArray rightItems;
@property (nonatomic) NSArray leftItems;
@property (nonatomic) UINavigationItem navigationItem;
@property (nonatomic) BOOL hidesBackButton;
- (void).cxx_destruct;
- (BOOL)hidesBackButton;
- (void)setHidesBackButton:;
- (id)navigationItem;
- (id)rightItems;
- (void)setRightItems:;
- (id)leftItems;
- (void)setLeftItems:;
- (void)setNavigationItem:;
@end

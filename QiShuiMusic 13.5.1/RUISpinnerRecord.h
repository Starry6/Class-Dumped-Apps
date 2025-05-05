@interface RUISpinnerRecord : NSObject
@property (nonatomic) NSArray rightItems;
@property (nonatomic) NSArray leftItems;
@property (nonatomic) UINavigationItem navigationItem;
@property (nonatomic) BOOL hidesBackButton;
@property (nonatomic) NSString title;
@property (nonatomic) NSString spinningTitle;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (BOOL)hidesBackButton;
- (void)setHidesBackButton:;
- (id)navigationItem;
- (id)rightItems;
- (void)setRightItems:;
- (id)leftItems;
- (void)setLeftItems:;
- (void)setNavigationItem:;
- (id)spinningTitle;
- (void)setSpinningTitle:;
@end

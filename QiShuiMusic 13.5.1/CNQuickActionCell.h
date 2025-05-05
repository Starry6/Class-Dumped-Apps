@interface CNQuickActionCell : UICollectionViewCell
@property (nonatomic) CNQuickActionButton button;
@property (nonatomic) BOOL showTitle;
@property (nonatomic) BOOL showBackgroundPlatter;
- (BOOL)showTitle;
- (void)setShowTitle:;
- (id)initWithFrame:;
- (id)button;
- (void).cxx_destruct;
- (void)setButton:;
- (BOOL)showBackgroundPlatter;
- (void)setShowBackgroundPlatter:;
@end

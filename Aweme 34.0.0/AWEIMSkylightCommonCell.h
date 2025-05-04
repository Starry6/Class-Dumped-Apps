@interface AWEIMSkylightCommonCell : UICollectionViewCell
@property (nonatomic) UILongPressGestureRecognizer longPressGes;
@property (nonatomic) NSMutableDictionary componentsViewMap;
@property (nonatomic) AWEIMSkylightCellComponentContext currentContext;
- (void)awe_themeReload;
- (id)longPressGes;
- (void)setLongPressGes:;
- (void)renderWithViewModel:;
- (void)longPressGesHandler:;
- (id)componentsViewMap;
- (void)setupBaseInit;
- (void)setComponentsViewMap:;
- (id)currentContext;
- (id)initWithFrame:;
- (void)setHighlighted:;
- (void)setCurrentContext:;
- (void).cxx_destruct;
@end

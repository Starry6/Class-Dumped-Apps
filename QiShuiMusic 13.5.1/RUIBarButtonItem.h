@interface RUIBarButtonItem : RUIElement
@property (nonatomic) @? action;
@property (nonatomic) UIBarButtonItem barButtonItem;
@property (nonatomic) NSString itemType;
- (id)barButtonItem;
- (id)action;
- (void)setImage:;
- (void)setAction:;
- (id)itemType;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)_labelColor;
- (void)setImageSize:;
- (void)_buttonPressed:;
- (void)updateBackButtonColors;
@end

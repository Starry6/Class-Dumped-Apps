@interface CNStarkHeaderPlatterView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView accessory;
@property (nonatomic) NSString labelText;
@property (nonatomic) UIImage accessoryImage;
- (id)accessory;
- (void)setAccessory:;
- (BOOL)canBecomeFocused;
- (void)setLabel:;
- (id)label;
- (void)setLabelText:;
- (void).cxx_destruct;
- (id)labelText;
- (void)didUpdateFocusInContext:withAnimationCoordinator:;
- (id)accessoryImage;
- (id)initWithLabelText:accessoryImage:;
- (void)_updateForFocusedState:;
- (void)setAccessoryImage:;
@end

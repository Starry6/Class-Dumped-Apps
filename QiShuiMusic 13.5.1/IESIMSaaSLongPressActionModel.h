@interface IESIMSaaSLongPressActionModel : NSObject
@property (nonatomic) NSAttributedString titleString;
@property (nonatomic) UIImage icon;
@property (nonatomic) @? actionHandler;
- (id)initWithTitleString:icon:actionHandler:;
- (id)icon;
- (void)setActionHandler:;
- (id)actionHandler;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)titleString;
- (void)setTitleString:;
@end

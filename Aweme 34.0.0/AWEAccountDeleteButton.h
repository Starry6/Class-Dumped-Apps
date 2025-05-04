@interface AWEAccountDeleteButton : UIButton
@property (nonatomic) UITextField textField;
@property (nonatomic) <AWEAccountDeleteButtonDelegate> delegate;
- (id)initWithTextFiled:;
- (id)delegate;
- (id)textField;
- (void)setup;
- (void)setTextField:;
- (void)setNeedsUpdate;
- (void)deleteAction;
- (void).cxx_destruct;
- (void)_update;
- (void)setDelegate:;
- (void)updateAction:;
+ (id)buttonWithType:textField:;
@end

@interface AWEIMFastReplyEditItemView : UIView
@property (nonatomic) UITextField textField;
@property (nonatomic) AWEAnimatedButton cancelButton;
@property (nonatomic) UILabel tipsView;
@property (nonatomic) @? removeActionBlock;
- (void)configWithModel:;
- (id)tipsView;
- (void)setTipsView:;
- (void)handleTextFieldEditingChangedEvent:;
- (id)removeActionBlock;
- (void)setRemoveActionBlock:;
- (id)init;
- (void)setCancelButton:;
- (void)prepareForReuse;
- (id)textField;
- (void)setTextField:;
- (void)didEndEditing;
- (id)cancelButton;
- (void).cxx_destruct;
- (void)cancelButtonPressed:;
- (void)setupSubviews;
@end

@interface IESECSliceXTextInputElementView : IESECSliceXBaseContentElementView
@property (nonatomic) q maxLength;
@property (nonatomic) Q textLength;
@property (nonatomic) BOOL needOpenKeyBoard;
@property (nonatomic) UITextField contentTextField;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contentTextField;
- (BOOL)needOpenKeyBoard;
- (void)setContentTextField:;
- (void)setNeedOpenKeyBoard:;
- (void)setupElementView;
- (id)sliceXFlexLayoutMeasureView:width:widthMode:height:heightMode:;
- (BOOL)textFieldShouldReturn:;
- (BOOL)textFieldShouldBeginEditing:;
- (void)textFieldDidEndEditing:;
- (void)layoutSubviews;
- (long long)maxLength;
- (void)setTextLength:;
- (void)setMaxLength:;
- (void)textFieldDidBeginEditing:;
- (unsigned long long)textLength;
- (void).cxx_destruct;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (void)textFieldDidChange:;
@end

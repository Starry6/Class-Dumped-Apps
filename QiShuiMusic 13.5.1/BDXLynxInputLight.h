@interface BDXLynxInputLight : BDXLynxBaseInputLight
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)inputWillBeFilteredFrom:to:;
- (void)propsDidUpdate;
- (void)setShowSoftInputOnFocus:requestReset:;
- (void)setValue:withResult:;
- (void)updateFrame:withPadding:border:margin:withLayoutAnimation:;
- (BOOL)textFieldShouldReturn:;
- (BOOL)textFieldShouldBeginEditing:;
- (void)textFieldDidEndEditing:;
- (void)textFieldDidBeginEditing:;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (void)textFieldDidChangeSelection:;
- (void)textFieldDidChange:;
- (id)createView;
- (id)getText;
+ (id)__lynx_prop_config__731;
+ (id)__lynx_ui_method_config__972;
@end

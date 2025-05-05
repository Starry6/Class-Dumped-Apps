@interface WKColorPicker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)presentationControllerDidDismiss:;
- (id)initWithView:;
- (void).cxx_destruct;
- (id)controlView;
- (id).cxx_construct;
- (void)colorPickerViewControllerDidSelectColor:;
- (void)colorPickerViewControllerDidFinish:;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)selectColor:;
- (id)focusedElementSuggestedColors;
- (void)updateColorPickerState;
- (void)configurePresentation;
@end

@interface WKSelectMultiplePicker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)presentationControllerDidDismiss:;
- (id)initWithView:;
- (void).cxx_destruct;
- (id)controlView;
- (id).cxx_construct;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)configurePresentation;
- (void)selectRow:inComponent:extendingSelection:;
- (id)_indexPathForRow:;
@end

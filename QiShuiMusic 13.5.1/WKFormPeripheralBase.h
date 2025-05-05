@interface WKFormPeripheralBase : NSObject
@property (nonatomic) WKContentView view;
@property (nonatomic) NSObject<WKFormControl> control;
@property (nonatomic) BOOL editing;
@property (nonatomic) BOOL singleTapShouldEndEditing;
- (BOOL)handleKeyEvent:;
- (BOOL)isEditing;
- (id)assistantView;
- (id)view;
- (void)beginEditing;
- (void)endEditing;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)control;
- (id)initWithView:control:;
- (BOOL)singleTapShouldEndEditing;
- (void)setSingleTapShouldEndEditing:;
@end

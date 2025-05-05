@interface FLEXMethodCallingViewController : FLEXVariableEditorViewController
@property (nonatomic) FLEXMethod method;
- (id)initWithTarget:method:;
- (void)viewDidLoad;
- (id)argumentInputViews;
- (void)actionButtonPressed:;
- (id)method;
+ (id)target:method:;
@end

@interface FLEXDefaultEditorViewController : FLEXVariableEditorViewController
@property (nonatomic) NSUserDefaults defaults;
@property (nonatomic) NSString key;
- (id)defaults;
- (id)key;
- (void)viewDidLoad;
- (void)actionButtonPressed:;
+ (id)target:key:commitHandler:;
+ (BOOL)canEditDefaultWithValue:;
@end

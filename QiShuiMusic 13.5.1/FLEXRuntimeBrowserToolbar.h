@interface FLEXRuntimeBrowserToolbar : FLEXKeyboardToolbar
@property (nonatomic) @? tapHandler;
- (void)setKeyPath:suggestions:;
- (id)tapHandler;
- (void)setTapHandler:;
- (void).cxx_destruct;
+ (id)toolbarWithHandler:suggestions:;
+ (id)buttonsForKeyPath:suggestions:handler:;
@end

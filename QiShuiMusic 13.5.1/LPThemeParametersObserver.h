@interface LPThemeParametersObserver : NSObject
- (void)addClient:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)didChangeDarkenColorsStatus:;
- (void)didChangeThemeParameters;
+ (id)shared;
@end

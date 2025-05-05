@interface AKAuthorizationClientImpl : NSObject
@property (nonatomic) <AKAuthorizationUIProvider> uiProvider;
- (id)uiProvider;
- (void)dealloc;
- (void)setUiProvider:;
- (void)presentAuthorizationUIForContext:completion:;
- (void).cxx_destruct;
@end

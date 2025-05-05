@interface ExtensionKit.AppExtensionWrapper : _EXExtension
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldAcceptConnection:;
- (void)willFinishLaunching;
- (void)didFinishLaunching;
@end

@interface UIDebuggingInformationVCHierarchyDataContainer : NSObject
@property (nonatomic) UIViewController viewController;
@property (nonatomic) q level;
- (void)setLevel:;
- (void)setViewController:;
- (long long)level;
- (id)viewController;
- (void).cxx_destruct;
- (id)initWithViewController:atLevel:;
@end

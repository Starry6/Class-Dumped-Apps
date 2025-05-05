@interface UIDebuggingInformationHierarchyDataContainer : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) q level;
@property (nonatomic) BOOL collapsed;
- (void)setLevel:;
- (long long)level;
- (void)setCollapsed:;
- (id)view;
- (void).cxx_destruct;
- (void)setView:;
- (BOOL)collapsed;
- (id)initWithView:atLevel:;
@end

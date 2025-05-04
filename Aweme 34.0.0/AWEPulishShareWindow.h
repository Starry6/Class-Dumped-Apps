@interface AWEPulishShareWindow : UIWindow
@property (nonatomic) BOOL isDismissing;
- (id)aAWEPadModuleAdapter;
- (BOOL)isDismissing;
- (id)hitTest:withEvent:;
- (void)layoutSubviews;
- (void)setIsDismissing:;
+ (Class)aAWEPadModuleAdapterClass;
@end

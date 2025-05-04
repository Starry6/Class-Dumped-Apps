@interface AWETransformerNativeElement : AWETransformerSingleElement
@property (nonatomic) UIViewController nativeVC;
@property (nonatomic) <AWETransformerNativeContainerDelegate> nativeContainerDelegate;
@property (nonatomic) NSString containerType;
- (double)originWidth;
- (double)originHeight;
- (void)loadViewWithCache:delegate:;
- (void)__loadNativeView;
- (void)setNativeContainerDelegate:;
- (id)nativeContainerDelegate;
- (void)setNativeVC:;
- (id)nativeVC;
- (void)loadView;
- (void).cxx_destruct;
- (id)containerType;
- (void)setContainerType:;
+ (id)elementType;
@end
